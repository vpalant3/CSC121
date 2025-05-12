//
//  ConwayFunctions.h
//  Conway's Game
//
//  Created by Vladislav Palant on 5/11/25.
//

#ifndef conwayfunctions_h
#define conwayfunctions_h

#include <vector>

void initializeBoard(std::vector<std::vector<int>>& board);

void displayBoard(const std::vector<std::vector<int>>&board);

int countNeighbors(const std::vector<std::vector<int>>& board, int row, int col);

void updateBoard(std::vector<std::vector<int>>& board, int birthRule, int surviveMin, int surviveMax);

#endif
