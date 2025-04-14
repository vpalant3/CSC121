//
//  BoatFunctions.cpp
//  Battle Boats
//
//  Created by Vladislav Palant on 4/13/25.
//

#include "boatfunctions.h"
#include <iostream>
#include <cctype>
#include <limits>


const std::string EMPTY = "_ ";
const std::string HIT   = "💥";
const std::string MISS  = "❌";



Board::Board(const std::string &symbol)
  : boatSymbol(symbol)
{
   
    for (int r = 0; r < SIZE; r++) {
        for (int c = 0; c < SIZE; c++) {
            grid[r][c] = EMPTY;
        }
    }
}

void Board::placeBoat(int row, int col) {
    grid[row][col] = boatSymbol;
}

bool Board::markGuess(int row, int col) {
   
    if (grid[row][col] == boatSymbol) {
        grid[row][col] = HIT;
        return true;
    }
   
    else if (grid[row][col] == EMPTY) {
        grid[row][col] = MISS;
    }
    return false;
}

bool Board::isBoatStillFloating() const {
    for (int r = 0; r < SIZE; r++) {
        for (int c = 0; c < SIZE; c++) {
            if (grid[r][c] == boatSymbol) {
                return true;
            }
        }
    }
    return false;
}

void Board::printBoard(bool hideBoats) const {
    std::cout << "   1   2   3   4\n";
    for (int r = 0; r < SIZE; r++) {
       
        std::cout << (char)('A' + r) << "  ";
        for (int c = 0; c < SIZE; c++) {
            std::string cell = grid[r][c];
            
            if (hideBoats && cell == boatSymbol) {
                cell = EMPTY;
            }
            std::cout << cell << "  ";
        }
        std::cout << "\n";
    }
}



bool readCell(const std::string &input, int &row, int &col) {
    if (input.size() != 2) {
        return false;
    }
    char rowChar = toupper(input[0]);
    char colChar = input[1];


    if (rowChar < 'A' || rowChar > 'D') {
        return false;
    }
    row = rowChar - 'A';

    
    if (colChar < '1' || colChar > '4') {
        return false;
    }
    col = colChar - '1';

    return true;
}

std::string chooseBoatSymbol() {
    std::string boatOptions[4] = {"⛵️", "🚢", "⛴️", "🛥️"};
    std::cout << "\nChoose your boat symbol:\n";
    for (int i = 0; i < 4; i++) {
        std::cout << (i + 1) << ") " << boatOptions[i] << "\n";
    }
    std::cout << "Enter 1-4: ";

    int choice;
    while (true) {
        std::cin >> choice;
        if (!std::cin.fail() && choice >= 1 && choice <= 4) {
            break;
        } else {
            std::cin.clear();
            
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            std::cout << "Invalid choice. Enter 1-4: ";
        }
    }
    return boatOptions[choice - 1];
}

bool askToPlayAgain() {
    std::cout << "\nWould you like to play again? (y/n) ";
    char answer;
    std::cin >> answer;
    return (answer == 'y' || answer == 'Y');
}
