//
//  ComplexFunctions.h
//  Complex Problem
//
//  Created by Vladislav Palant on 3/17/25.
//

#ifndef ComplexNumberFunctions_H
#define ComplexNumberFunctions_H

class ComplexNumber {
private:
    
    float realPart;
    float imagPart;
    
public:
    ComplexNumber(float r, float i);
    
    ComplexNumber();
    
    ComplexNumber add(const ComplexNumber & other) const;
    
    ComplexNumber subtract(const ComplexNumber& other) const;
    
    ComplexNumber negate() const;
    
    float magnitude() const;
    
    ComplexNumber conjugate() const;
    
    float real() const;
    
    float imaginary() const;
    void prettyPrint() const;
    
};
#endif
