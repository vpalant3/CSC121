//
//  DetailsFunctions.cpp
//  File Away Those Details
//
//  Created by Vladislav Palant on 4/27/25.
//

#include "detailsfunctions.h"
#include <iostream>
#include <limits>
#include <cmath>
using namespace std;

bool openFile(ifstream& file, const string& filename) {
    file.open(filename);
    return file.is_open();
}

void processFile(ifstream& file, int& count, double& sum, double& sumSquares, double& minimum, double& maximum) {
    double value;
    count = 0;
    sum = 0.0;
    sumSquares = 0.0;
    minimum = numeric_limits<double>::max();
    maximum = numeric_limits<double>::lowest();

    while (file >> value) {
        count++;
        sum += value;
        sumSquares += value * value;
        if (value < minimum) minimum = value;
        if (value > maximum) maximum = value;
    }
}

void displayResults(int count, double sum, double sumSquares, double minimum, double maximum) {
    if (count == 0) {
        cout << "Warning: No data found in the file.\n";
        return;
    }

    double mean = sum / count;
    double variance = (sumSquares - count * mean * mean) / (count - 1);
    double stddev = sqrt(variance);

    cout << "\nFor your data, the statistics are as follows:\n";
    cout << "     Count:  " << count << '\n';
    cout << "   Minimum:  " << minimum << '\n';
    cout << "      Mean:  " << mean << '\n';
    cout << "   Maximum:  " << maximum << '\n';
    cout << "    StdDev:  " << stddev << '\n';
}
