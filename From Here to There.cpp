//
//  main.cpp
//  From Here to There
//
//  Created by Vladislav Palant on 1/28/25.
//

#include <iostream>
#include <cmath> //; c math library
int main(int argc, const char * argv[]) {
    std::cout << "Welcome to the 2D Distance Program!\n";
    std::cout << "Do you want to calculate in 2 or 3 dimensions?\n";
    int choice;
    std::cin >> choice ;
    
    if (choice == 2){
        
        std::cout << "\nWhat is the first point on the plane?\n" ;
        double x1 , y1 ;
        std::cin >> x1 >> y1 ;
        std::cout << "\nWhat is the second point on the plane?\n" ;
        double x2 , y2 ;
        std::cin >> x2 >> y2 ;
        std::cout << "\nCalculating the distance now...\n" ;
        std::cout << "The distance between (" << x1 << " , " << y1 << ")" << " and ";
        std::cout << "(" << x2 << " , " << y2 << ") is ";
        double x3 , y3;
        x3 = (x2-x1);
        y3 = (y2-y1);
        double x4, y4;
        x4=pow(x3,2);
        y4=pow(y3,2);
        std::cout << sqrt((x4)+(y4)) << std::endl;
        std::cout << "Thank you for using the Distance Program, until next time!\n";
    }
    
    else if(choice == 3){
        std::cout << "\nWhat is the first point on the plane?\n" ;
        double a1 , b1 , c1 ;
        std::cin >> a1 >> b1 >> c1;
        std::cout << "\nWhat is the second point on the plane?\n";
        double a2, b2, c2;
        std::cin >> a2 >> b2 >> c2;
        std::cout << "\nCalculating the distance now...\n";
        std::cout << "The Distance between (" << a1 << " , " << b1 << " , " << c1 << ")" << " and ";
        std::cout << "("  << a2 << " , " << b2 << " , " << c2 << ")" << " is ";
        double a3 , b3, c3;
        a3 = (a2-a1);
        b3 = (b2-b1);
        c3 = (c2-c1);
        double a4,b4,c4;
        a4=pow(a3,2);
        b4=pow(b3,2);
        c4=pow(c3,2);
        std::cout << sqrt((a4)+(b4)+(c4)) << std::endl;
        std::cout << "Thank you for using the Distance Program, until next time!\n";
    }
    return 0;
}
