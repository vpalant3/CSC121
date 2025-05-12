//
//  main.cpp
//  NthTest
//
//  Created by Vladislav Palant on 5/11/25.
//

#include <iostream>
#include <cassert>
#include "NthFunctions.h"
using namespace std;

void runTests() {
        assert(number_suffix(0) == "");
        assert(number_suffix(1) == "st");
        assert(number_suffix(2) == "nd");
        assert(number_suffix(3) == "rd");
        assert(number_suffix(4) == "th");
        assert(number_suffix(10) == "th");
        assert(number_suffix(11) == "th");
        assert(number_suffix(12) == "th");
        assert(number_suffix(13) == "th");
        assert(number_suffix(21) == "st");
        assert(number_suffix(22) == "nd");
        assert(number_suffix(23) == "rd");
        assert(number_suffix(111) == "th");
        assert(number_suffix(112) == "th");
        assert(number_suffix(113) == "th");
        assert(number_suffix(121) == "st");
            cout << "All tests passed!" << endl;
    }
int main() {
    runTests();
    return 0;
}
