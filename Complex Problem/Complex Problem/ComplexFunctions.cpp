//
//  ComplexFunctions.cpp
//  Complex Problem
//
//  Created by Vladislav Palant on 3/17/25.
//

#include "ComplexFunctions.h"
#include <iostream>
#include <cmath>

ComplexNumber::ComplexNumber(float r, float i) {
    realPart = r;
    imagPart = i;
}

ComplexNumber::ComplexNumber() {
    realPart = 0.0f;
    imagPart = 0.0f;
}

ComplexNumber ComplexNumber::add(const ComplexNumber& other) const {
    float newReal = realPart + other.realPart;
    float newImag = imagPart + other.imagPart;
    return ComplexNumber(newReal, newImag);
}

ComplexNumber ComplexNumber::subtract(const ComplexNumber& other) const {
    float newReal = realPart - other.realPart;
    float newImag = imagPart - other.imagPart;
    return ComplexNumber(newReal, newImag);
}

ComplexNumber ComplexNumber::negate() const {
    float newReal = -realPart;
    float newImag = -imagPart;
    return ComplexNumber(newReal, newImag);
}

float ComplexNumber::magnitude() const {
    return std::sqrt((realPart * realPart) + (imagPart * imagPart));
}

ComplexNumber ComplexNumber::conjugate() const {
    return ComplexNumber(realPart, -imagPart);
}

float ComplexNumber::real() const {
    return realPart;
}

float ComplexNumber::imaginary() const {
    return imagPart;
}

void ComplexNumber::prettyPrint() const {
    std::cout << realPart << " + " << imagPart << "i";
}
