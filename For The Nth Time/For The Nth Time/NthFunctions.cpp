//
//  NthFunctions.cpp
//  For The Nth Time
//
//  Created by Vladislav Palant on 5/11/25.
//

#include "NthFunctions.h"
#include <string>
using namespace std;

string number_suffix(int n) {
    if (n <= 0) return "";
    
    int last_two = n % 100;
    int last_one = n % 10;
    
    if (last_two >= 11 && last_two <= 13) {
        return "th";
    }
    switch (last_one) {
        case 1: return "st";
        case 2: return "nd";
        case 3: return "rd";
        default: return "th";
    }
}
