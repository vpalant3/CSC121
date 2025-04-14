//
//  VectorFunctions.cpp
//  Vectors
//
//  Created by Vladislav Palant on 4/13/25.
//

#ifndef VECTORFUNCTIONS_TPP
#define VECTORFUNCTIONS_TPP

#include <vector>
#include <unordered_set>

template <typename T>
std::vector<T> remove_duplicates(const std::vector<T>& vec) {
    std::unordered_set<T> seen;
    std::vector<T> result;

    for (const T& item : vec) {
        if (seen.find(item) == seen.end()) {
            seen.insert(item);
            result.push_back(item);
        }
    }
    return result;
}

#endif 
