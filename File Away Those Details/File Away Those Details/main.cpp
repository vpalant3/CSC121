//
//  main.cpp
//  File Away Those Details
//
//  Created by Vladislav Palant on 4/27/25.
//

#include "detailsfunctions.h"
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    cout << "Welcome to the Number Statistics Program!\n\n";

    ifstream dataFile;
    string filename;

    while (true) {
        cout << "Please enter the name of your data file: ";
        getline(cin, filename);

        if (openFile(dataFile, filename)) {
            cout << "\nFile '" << filename << "' opened successfully!\n";
            break;
        } else {
            cout << "\nI'm sorry, I could not open '" << filename << "'.\n";
        }
    }

    cout << "\nReading data from '" << filename << "'...\n";
    cout << "Calculating...\n\n";

    int count;
    double sum, sumSquares, minimum, maximum;

    processFile(dataFile, count, sum, sumSquares, minimum, maximum);

    cout << "Done processing data!\n";

    displayResults(count, sum, sumSquares, minimum, maximum);

    cout << "\nThank you for using the Number Statistics Program!\n";

    dataFile.close();
    return 0;
}
