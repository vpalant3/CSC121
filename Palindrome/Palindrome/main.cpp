//
//  main.cpp
//  Palindrome
//
//  Created by Vladislav Palant on 3/23/25.
//

#include <iostream>
#include <string>
#include "PaliFunc.h"

int main(int argc, const char * argv[]) {
    // insert code here...
    std::string UserWord;
    std::cout << "Enter a word: ";
    std::cin >> UserWord;
    
    if (is_palindrome(UserWord)) {
        std::cout << "\"" << UserWord << "\" is palindrome. \n";
    } else {
        std::cout << "\"" << UserWord << "\" is not a palndrome.\n";
    }
    
    
    return 0;
}
