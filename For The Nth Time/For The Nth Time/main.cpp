//
//  main.cpp
//  For The Nth Time
//
//  Created by Vladislav Palant on 5/11/25.
//

#include <iostream>
#include "NthFunctions.h"
using namespace std;
int main(int argc, const char * argv[]) {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    
    while (true) {
        cout << "Enter a number: ";
        cin >> n;
        std::string suffix = number_suffix(n);
        if(!suffix.empty()) {
            break;
        }
        cout << "Invalid input. PLease enter a number greater than 0." << endl;
    }
    cout << n << number_suffix(n) << endl;
    
    return 0;
}
