//
//  main.cpp
//  DetailsTest
//
//  Created by Vladislav Palant on 4/27/25.
//

#include "detailsfunctions.h"
#include <iostream>
#include <fstream>
#include <cassert>
using namespace std;

void testStatisticsCalculation() {
    ofstream testFile("testfile.txt");
    testFile << "1 2 3 4 5";
    testFile.close();

    ifstream dataFile;
    bool opened = openFile(dataFile, "testfile.txt");
    assert(opened);

    int count;
    double sum, sumSquares, minimum, maximum;

    processFile(dataFile, count, sum, sumSquares, minimum, maximum);

    assert(count == 5);
    assert(minimum == 1);
    assert(maximum == 5);
    assert(sum == 15);

    double mean = sum / count;
    double variance = (sumSquares - count * mean * mean) / (count - 1);
    double stddev = sqrt(variance);

    assert(abs(mean - 3.0) < 1e-5);
    assert(abs(stddev - 1.5811) < 1e-2); // Allow some floating-point error

    cout << "All tests passed!\n";
    dataFile.close();
}

int main() {
    testStatisticsCalculation();
    return 0;
}
