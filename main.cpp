//
//  main.cpp
//  Monograms Are Us
//
//  Created by Vladislav Palant on 2/9/25.
//

#include <iostream>
#include <cctype> // for toupper
using namespace std; // std:: placement
int main(int argc, const char * argv[]) {
    
    std::cout << "Welcome to the Monogram Program!\n";
    std::cout << "What are your initials (first, middle, and last)?" << endl;
    char FirstInitial, MiddleInitial, LastInitial;
    std::cin >> FirstInitial >> MiddleInitial >> LastInitial;
    MiddleInitial = std::toupper(MiddleInitial);
    FirstInitial = std::tolower(FirstInitial);
    LastInitial = std::toupper(LastInitial);
    
    std::cout << "\nYour monogram will be " << MiddleInitial << " , " << FirstInitial << " , " << LastInitial << endl;
    std::cout << "Thank you for using the Monogram Program!\n";
    return 0;
}
