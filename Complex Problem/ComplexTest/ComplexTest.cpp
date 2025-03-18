//
//  main.cpp
//  ComplexTest
//
//  Created by Vladislav Palant on 3/17/25.
//

#include "ComplexFunctions.h"
#include <cassert>
#include <cmath>
#include <iostream>

int main() {

    ComplexNumber c1(5.0f, 7.0f);

    assert(c1.real() == 5.0f);
    assert(c1.imaginary() == 7.0f);

    ComplexNumber c2(2.5f, 3.1f);

    ComplexNumber sum = c1.add(c2);
    
    assert(std::fabs(sum.real() - 7.5f) < 0.0001f);
    assert(std::fabs(sum.imaginary() - 10.1f) < 0.0001f);

    std::cout << "All tests in ComplexFunctionsTest passed!\n";
    return 0;
}
