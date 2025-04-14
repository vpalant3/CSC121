//
//  main.cpp
//  Battle Boats
//
//  Created by Vladislav Palant on 4/6/25.
//

#include "boatfunctions.h"
#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
  
    srand(static_cast<unsigned>(time(nullptr)));

    bool playAgain = true;

    while (playAgain) {
        std::cout << "\nWelcome to Battle Boats!\n";

        std::string userBoatSymbol = chooseBoatSymbol();

        std::string computerBoatSymbol = "🚢";

        Board playerBoard(userBoatSymbol);
        Board computerBoard(computerBoatSymbol);

        std::cout << "\nHere is your 4x4 board layout, currently empty:\n";
        playerBoard.printBoard(false);

        while (true) {
            std::cout << "\nPlace your boat (e.g., A1, B4, C2, etc.): ";
            std::string input;
            std::cin >> input;
            int row, col;
            if (readCell(input, row, col)) {
                playerBoard.placeBoat(row, col);
                break;
            } else {
                std::cout << "Invalid input. Try again.\n";
            }
        }

        int compRow = rand() % SIZE;
        int compCol = rand() % SIZE;
        computerBoard.placeBoat(compRow, compCol);

        bool computerGuessed[SIZE][SIZE] = { false };

        bool gameOver   = false;
        bool playerTurn = true;

        while (!gameOver) {

            std::cout << "\nYour board:\n";
            playerBoard.printBoard(false);

            std::cout << "\nComputer's board (your guesses so far):\n";
            computerBoard.printBoard(true);

            if (playerTurn) {
                std::cout << "\nYour turn! Enter a cell to fire at (e.g., A1): ";
                std::string guess;
                std::cin >> guess;
                int row, col;
                if (!readCell(guess, row, col)) {
                    std::cout << "Invalid input. Try again.\n";
                    continue;
                }
                bool isHit = computerBoard.markGuess(row, col);
                if (isHit) {
                    std::cout << "You HIT the computer's boat! You win!\n";
                    gameOver = true;
                } else {
                    std::cout << "You missed!\n";
                    playerTurn = false;
                }
            }
            else {
                int row, col;
                while (true) {
                    row = rand() % SIZE;
                    col = rand() % SIZE;
                    if (!computerGuessed[row][col]) {
                        computerGuessed[row][col] = true;
                        break;
                    }
                }

                std::cout << "\nComputer fires at "
                          << (char)('A' + row) << (col + 1)
                          << "...\n";

                bool isHit = playerBoard.markGuess(row, col);
                if (isHit) {
                    std::cout << "The computer HIT your boat! The computer wins!\n";
                    gameOver = true;
                } else {
                    std::cout << "The computer missed!\n";
                    playerTurn = true;
                }
            }
        }

        std::cout << "\nFinal State of Your Board:\n";
        playerBoard.printBoard(false);

        std::cout << "\nFinal State of Computer's Board:\n";
        computerBoard.printBoard(false);

        playAgain = askToPlayAgain();
    }

    std::cout << "\nThanks for playing Battle Boats!\n";
    return 0;
}
