//
//  PaliFunc.cpp
//  Palindrome
//
//  Created by Vladislav Palant on 3/23/25.
//

#include "PaliFunc.h"
#include <cctype> //tolower

bool is_palindrome(const std::string &input) {
    std::string lowerinput;
    lowerinput.reserve(input.size());
    for (char c : input) {
        lowerinput.push_back(std::tolower(static_cast<unsigned char>(c)));
    }
    
    int left = 0;
    int right = static_cast<int>(lowerinput.size()) - 1;
    
    while (left < right) {
        if (lowerinput[left] != lowerinput[right]) {
            return false;
        }
            ++left;
            --right;
    }
            
    return true;
    }
