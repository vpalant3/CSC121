//
//  DetailsFunctions.h
//  File Away Those Details
//
//  Created by Vladislav Palant on 4/27/25.
//

#ifndef detailsfunction_h
#define detailsfunctions_h

#include <string>
#include <fstream>

bool openFile(std::ifstream& file, const std::string& filename);
void processFile(std::ifstream& file, int& count, double& sum, double& sumSquares, double& minimum, double& maximum);
void displayResults(int count, double sum, double sumSquares, double minimum, double maximum);

#endif
