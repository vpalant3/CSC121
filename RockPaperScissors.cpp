//
//  main.cpp
//  Rock Paper Scissors
//
//  Created by Vladislav Palant on 2/10/25.
//

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <limits>
using namespace std;

int main() {
   cout << "Welcome to Rock, Paper, Scissors! You will be playing against a computer today!" << endl;
    bool PlayAgain = true;
    
    while (PlayAgain) {
        cout << "Pick a move!" << endl;
        cout << "1) Rock\n"
             << "2) Paper\n"
             << "3) Scissors\n"
             << "> ";
        int input;
        cin >> input;
        
        int CompChoice = rand() % 3 +1;
        
        string userMove, compMove; // usermove is the real person, and compmove, is the computers move.
            if (input == 1) userMove = "Rock";
        else if (input == 2) userMove = "Paper";
        else if (input == 3) userMove = "Scissors";
        
        if (CompChoice == 1) compMove = "Rock";
        else if (CompChoice == 2) compMove = "Paper";
        else    compMove = "Scissors";
        
        cout << "\nYou chose " << userMove << " while the computer chose " << compMove << ". ";
        
        if (input == CompChoice) {
                    cout << "It's a tie!\n";
                }
                else if (
                    (input == 1 && CompChoice == 3) ||  // rock beats scissors
                    (input == 2 && CompChoice == 1) ||  // paper beats rock
                    (input == 3 && CompChoice == 2)     // scissors beats paper
                ) {
                    cout << "You win!\n";
                } else {
                    cout << "You lose!\n";
                }

                cout << "\nPlay again?\n\n"
                     << "1) Yes\n"
                     << "2) No\n\n"
                     << "> ";
                int againChoice;
                cin >> againChoice;

                if (againChoice == 2) {
                    PlayAgain = false;
                }
                cout << "\n";
            }
    cout << "Have a great day!\n";
    return 0;
}
