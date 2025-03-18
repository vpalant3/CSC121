//
//  main.cpp
//  Itty Bitty Kitty
//
//  Created by Vladislav Palant on 3/9/25.
//

#include <iostream>
#include <string>
#include <sstream>
#include "KittenFunctions.h"
int main(){
    
    std::cout << "Welcome to the Cat Word Processor! Please enter a sentence below me:\n" ;
    std::string Kittytext;
    std::getline(std::cin, Kittytext);
    
    std::cout << "\nYour Sentence that you gave me!\n"
        << Kittytext << "\n\n";
    
    std::cout << "Your catified sentence is:\n" << convert(Kittytext) << "\n";
    
    std::cout << "Have a cat-tastic day!\n";
    return 0;
}
