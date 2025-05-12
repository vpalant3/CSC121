//
//  ConwayFunctions.cpp
//  Conway's Game
//
//  Created by Vladislav Palant on 5/11/25.
//

#include "conwayfunctions.h"
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

const int SIZE = 10;

void initializeBoard(vector<vector<int>>& board) {
    srand(static_cast<unsigned int>(time(0)));
    board.resize(SIZE, vector<int>(SIZE));
    for (int i = 0; i < SIZE; ++i)
        for (int j = 0; j < SIZE; ++j)
            board[i][j] = rand() % 2; // randomly 0 or 1
}

void displayBoard(const vector<vector<int>>& board) {
    for (int i = 0; i < SIZE; ++i) {
        for (int j = 0; j < SIZE; ++j) {
            cout << (board[i][j] ? "🟨" : ".") << " ";
        }
        cout << endl;
    }
    cout << endl;
}

int countNeighbors(const vector<vector<int>>& board, int row, int col) {
    int count = 0;
    for (int dr = -1; dr <= 1; ++dr) {
        for (int dc = -1; dc <= 1; ++dc) {
            if (dr == 0 && dc == 0) continue;
            int r = row + dr, c = col + dc;
            if (r >= 0 && r < SIZE && c >= 0 && c < SIZE)
                count += board[r][c];
        }
    }
    return count;
}

void updateBoard(vector<vector<int>>& board, int birthRule, int surviveMin, int surviveMax) {
    vector<vector<int>> nextBoard = board;
    for (int i = 0; i < SIZE; ++i) {
        for (int j = 0; j < SIZE; ++j) {
            int neighbors = countNeighbors(board, i, j);
            if (board[i][j] == 1) {
                nextBoard[i][j] = (neighbors >= surviveMin && neighbors <= surviveMax) ? 1 : 0;
            } else {
                nextBoard[i][j] = (neighbors == birthRule) ? 1 : 0;
            }
        }
    }
    board = nextBoard; 
}
