//
//  main.cpp
//  Point to Point
//
//  Created by Vladislav Palant on 1/21/25.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    
    std::cout << "Hello, Welcome to the 2D Midpoint Program\n";
    std::cout << "\n" ;
    std::cout << "What is the first point on the plane?\n" ;
    double x , y ;
    std::cin >> x >> y ;
    std::cout << "\n" ;
        std::cout << "What is the second point on the plane?\n" ;
    double a , b ;
    std::cin >> a >> b ;
        std::cout << "Calculating your midpoint now...\n" ;
        std::cout << "The midpoint of the line segment between (" ;
    std::cout << x << "," << y << ") and (" ;
    std::cout << a << "," << b ;
        std::cout << ") is (" << (x+a)/2 ;
        std::cout << "," ;
    std::cout << (y+b)/2 ;
        std::cout << ")\n" ;
        std::cout << "Thank you for using the 2D Midpoint Program!\n" ;
    
    return 0;
}
