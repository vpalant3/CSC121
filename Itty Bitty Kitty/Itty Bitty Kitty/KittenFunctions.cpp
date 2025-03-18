//
//  KittenFunctions.cpp
//  Itty Bitty Kitty
//
//  Created by Vladislav Palant on 3/14/25.
//

#include <iostream>
#include <string>
#include <sstream>

std::string convert(std::string Kittytext){
    bool replacedCat    = false;
    bool replacedKitty  = false;
    bool replacedKitten = false;
    bool replacedYarn   = false;
    bool replacedAngry  = false;
    bool replacedDance  = false;
    bool replacedLove   = false;
    bool replacedHappy  = false;
    bool replacedPainful    = false;
    bool replacedSurprised  = false;
    bool replacedMouse  = false;
    
    std::istringstream iss(Kittytext);
    std::string token;
    std::string catified;
    bool isFirstToken = true;
    
    while (iss >> token)
    {
        if (!replacedCat && token == "cat") {
            token = "/ᐠ｡ꞈ｡ᐟ\\";
            replacedCat = true;
        }
        else if (!replacedKitty && token == "kitty") {
            token = "(•ㅅ•)";
            replacedKitty = true;
        }
        else if (!replacedKitten && token == "kitten") {
            token = "(•ㅅ•)";
            replacedKitten = true;
        }
        else if (!replacedYarn && token == "yarn") {
            token = "o~";
            replacedYarn = true;
        }
        else if (!replacedAngry && token == "angry") {
            token = "(=ಠᆽಠ=)";
            replacedAngry = true;
        }
        else if (!replacedDance && token == "dance") {
            token = "~( ˘▾˘ ~)";
            replacedDance = true;
        }
        else if (!replacedLove && token == "love") {
            token = "(₌♥ᆽ♥₌)";
            replacedLove = true;
        }
        else if(!replacedHappy && token == "happy") {
            token = "(=^ ◡ ^=)";
            replacedHappy = true;
        } else if(!replacedPainful && token == "painful") {
            token = "(˃ᆺ˂)";
            replacedPainful = true;
        } else if(!replacedSurprised && token == "surprised") {
            token = "／(=๏ x ๏=)＼";
            replacedSurprised = true;
        } else if (!replacedMouse && token == "mouse") {
            token = "…ᘛ⁐̤ᕐᐷ";
            replacedMouse = true;
        }
        
        if(!isFirstToken) {
            catified += " ";
        } else {
            isFirstToken = false;
        }
        
        catified += token;
    }
    return catified;
}
