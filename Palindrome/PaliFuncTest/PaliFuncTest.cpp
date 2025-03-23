//
//  main.cpp
//  palindromefunctions
//
//  Created by Vladislav Palant on 3/23/25.
//

#include <iostream>
#include <cassert>
#include "PaliFunc.h"
int main(int argc, const char * argv[]) {
    // palindrome
    assert(is_palindrome("Otto"));
        assert(is_palindrome("Rotavator"));
        assert(is_palindrome("x"));
        assert(is_palindrome("mom"));
        assert(is_palindrome("racecar"));
        assert(is_palindrome("radar"));
    
    //not palindrome
    assert(!is_palindrome("Sam"));
    assert(!is_palindrome("orange"));
    assert(!is_palindrome("flower"));

    //edge
    
    assert(is_palindrome("")); // emtpy stringer
    assert(is_palindrome("A")); //single char
    
    std::cout << "All tests have passed\n";
    
    return 0;
}
