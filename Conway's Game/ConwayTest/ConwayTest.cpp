//
//  main.cpp
//  ConwayTest
//
//  Created by Vladislav Palant on 5/11/25.
//

#include "conwayfunctions.h"
#include <iostream>
#include <cassert>
using namespace std;

void testcountNeighbors() {
    vector<vector<int>> board = {
        {0, 1, 0},
        {1, 1, 0},
        {0, 0, 0}
    };
    assert(countNeighbors(board, 1, 1) == 2);
    assert(countNeighbors(board, 0, 0) == 3);
    cout << "testCountNeighbors passed!" << endl;
}

void runTests() {
    testcountNeighbors();
}

int main() {
    runTests();
    return 0;
}
