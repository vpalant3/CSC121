//
//  main.cpp
//  VectorFunctions
//
//  Created by Vladislav Palant on 4/13/25.
//

#include <cassert>
#include <vector>
#include <iostream>
#include "vectorfunctions.h"


void test_remove_duplicates() {
    std::vector<int> input = {1, 1, 2, 2, 3, 3};
    std::vector<int> expected = {1, 2, 3};
    std::vector<int> result = remove_duplicates(input);
    assert(result == expected);

    std::vector<char> char_input = {'a', 'b', 'a', 'c', 'b'};
    std::vector<char> char_expected = {'a', 'b', 'c'};
    std::vector<char> char_result = remove_duplicates(char_input);
    assert(char_result == char_expected);
}

int main() {
    test_remove_duplicates();
    std::cout << "All tests passed!" << std::endl;
    return 0;
}
