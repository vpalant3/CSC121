//
//  main.cpp
//  A Terribly Weighty Subject
//
//  Created by Vladislav Palant on 1/26/25.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    std::cout << "Hello! Welcome to the Ounce Conversion Program!\n";
    std::cout << "How many ounces do you have?\n" ;
    
    double x ;
    std::cin >> x ;
    
    std::cout << "Thank you! Converting ounces to pounds!\n" ;
    
    int totalounces = x ;
    int pounds = totalounces / 16 ;
    int leftoverounces = totalounces % 16 ;
    
    std::cout << x ;
    
    std::cout << " ounces is equivalent to " ;
    std::cout << pounds << " lbs and " ;
    
    std::cout << leftoverounces ;
    
    std::cout << " ounces\n" ;
    std::cout << x << " ounces is equivalent to " ;
    std::cout << x/16  << " lbs\n" ;
    std::cout << "Thank you for using the OCP today!\n" ;
    
    return 0;
}
