//
//  main.cpp
//  Conway's Game
//
//  Created by Vladislav Palant on 5/11/25.
//

#include "conwayfunctions.h"
#include <iostream>
using namespace std;

int main() {
    vector<vector<int>> board;
    int generations, birthRule, surviveMin, surviveMax;

    cout << "Welcome to Conway's Game of Life (10x10)!" << endl;
    cout << "Enter number of generations to simulate: ";
    cin >> generations;
    cout << "Enter how many neighbors a dead cell needs to be born: ";
    cin >> birthRule;
    cout << "Enter minimum neighbors to keep a cell alive: ";
    cin >> surviveMin;
    cout << "Enter maximum neighbors to keep a cell alive: ";
    cin >> surviveMax;

    initializeBoard(board);

    for (int gen = 0; gen < generations; ++gen) {
        cout << "\nGeneration " << gen + 1 << ":" << endl;
        displayBoard(board);
        updateBoard(board, birthRule, surviveMin, surviveMax);
    }

    cout << "Simulation complete. Goodbye!" << endl;
    return 0;
}
