//
//  main.cpp
//  KittyTest
//
//  Created by Vladislav Palant on 3/14/25.
//

#include <iostream>
#include "KittenFunctions.h"
#include <cassert>

int main(int argc, const char * argv[]) {
    
    std::cout << "Starting Test\n\n";
    assert(convert("cat") == "/ᐠ｡ꞈ｡ᐟ\\");
    assert(convert("kitty") == "(•ㅅ•)");
    assert(convert("kitten") == "(•ㅅ•)");
    assert(convert("yarn") == "o~");
    assert(convert("angry") == "(=ಠᆽಠ=)");
    assert(convert("dance") == "~( ˘▾˘ ~)");
    assert(convert("love") == "(₌♥ᆽ♥₌)");
    assert(convert("happy") == "(=^ ◡ ^=)");
    assert(convert("painful") == "(˃ᆺ˂)");
    assert(convert("surprised") == "／(=๏ x ๏=)＼");
    assert(convert("mouse") == "…ᘛ⁐̤ᕐᐷ");
    std::cout << "All tests passed!\n\n";
    return 0;
}
          
