//
//  main.cpp
//  Complex Problem
//
//  Created by Vladislav Palant on 3/16/25.
//


#include <iostream>
#include "ComplexFunctions.h"

int main() {
    std::cout << "Welcome to the ComplexNumber Demo!\n\n";

    ComplexNumber numberOne(5.0f, 7.0f);
    ComplexNumber numberTwo(2.5f, 3.1f);

    ComplexNumber sum = numberOne.add(numberTwo);
    std::cout << "numberOne + numberTwo = ";
    sum.prettyPrint();
    std::cout << "\n";

    ComplexNumber diff = numberOne.subtract(numberTwo);
    std::cout << "numberOne - numberTwo = ";
    diff.prettyPrint();
    std::cout << "\n";

    float mag = numberOne.magnitude();
    std::cout << "Magnitude of numberOne is " << mag << "\n";

    ComplexNumber neg = numberOne.negate();
    std::cout << "Negation of numberOne is ";
    neg.prettyPrint();
    std::cout << "\n";

    ComplexNumber conj = numberOne.conjugate();
    std::cout << "Conjugate of numberOne is ";
    conj.prettyPrint();
    std::cout << "\n";

    std::cout << "\nEnd of ComplexNumber Demo.\n";
    return 0;
}
