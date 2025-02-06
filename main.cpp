//
//  main.cpp
//  Rolling Along
//
//  Created by Vladislav Palant on 2/4/25.
//

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std; // You don't need std:: when using this line
int main(int argc, const char * argv[]) {
    std::cout << "Welcome to the Dice Statistics Program!\n";
    std::cout << "How many dice are in your roll?\n";
    int Dice, DiceSides;
    std::cin >> Dice;
    
    std::cout << "\nHow many sides are on a dice in your roll?\n";
    double max, avg;
    std::cin >> DiceSides;
    
    std::cout << "Thank you! When rolling a " << Dice << "d" << DiceSides << ", your statistics will be:\n";
    std::cout << "\nMinimum: " << Dice << endl;
    max = (Dice*DiceSides);
    avg = (Dice+max)/2;
    std::cout << "Average: " << avg << endl;
    std::cout << "Maximum: " << max << endl;
    
    srand(static_cast<unsigned>(time(nullptr)));
    int sum = 0;
    sum = 0;
    for (int i = 0; i < Dice; i++) {
        int roll = rand() % DiceSides + 1;
        sum += roll;
    }
    std::cout << "Finally, You rolled a " << sum << "!" << endl;
    
    return 0;
}
