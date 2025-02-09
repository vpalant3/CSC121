//
//  main.cpp
//  To Meet or Not to Meet
//
//  Created by Vladislav Palant on 2/2/25.
//

#include <iostream>
#include <cmath> //; c math library
int main(int argc, const char * argv[]) {
    std::cout << "Welcome to the Room Capcity Program!\n";
    std::cout << "How many people can this room hold?\n";
    double x = 0.0 , y = 0.0 ;
    double result1, result2;
    std::cin >> y;
    std::cout << "How many people have arrived for the meeting?\n";
    std::cin >> x;
    if(y>=x){
        std::cout << "You have used up ";
        result1 = (x/y)*100;
        result1 = std::round(result1);
        std::cout << result1;
        std::cout << "% of your room's capacity\n";
        std::cout << "You still have room for " << y-x << " more people\n" ;
        std::cout << "\nThis meeting is LEGAL, proceed with the congregation!\n";
        std::cout << "\nThank you for using the Room Capcity Program!\n";
    }
    else if(x>y){
        std::cout << "You have used up ";
        result2 = (x/y)*100;
        result2 = std::round(result2);
        std::cout << result2 << "% of your room's capacity\n";
        std::cout << x-y << " people have to leave.\n";
        std::cout << "This meeting is NOT LEGAL, you need to ask " << x-y << " people to leave!\n";
        std::cout << "\nThank you for using the Room Capcity Program\n";
        
    }
    return 0;
}
