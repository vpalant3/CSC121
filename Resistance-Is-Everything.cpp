//
//  main.cpp
//  Resistance is Everything
//
//  Created by Vladislav Palant on 1/16/25.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    std::cout << "Welcome to the Resistor Calculation Program!\n" ;
    std::cout << "Please enter your two resistances(Ohms): \n" ;
    double_t x, y ;
    std::cin >> x >> y ;
    std::cout << "You have entered " ; std::cout << x ; std::cout << " ohms and " ; std::cout << y ; std::cout << " ohms! \n" ;
    std::cout << "If your resistors are placed in series, they will total to " ; std::cout << x+y ; std::cout << " ohms!\n" ;
    std::cout << "If they are placed in parallel they will total to " ; std::cout << 1/((1/x)+(1/y)) ; std::cout << " ohms!\n" ;
    std::cout << "Thank you for using the Resistor Calculation Program!\n" ;
    
    return 0;
}
