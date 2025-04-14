//
//  main.cpp
//  Vectors
//
//  Created by Vladislav Palant on 4/13/25.
//

#include <iostream>
#include <vector>
#include "vectorfunctions.h"
#include "vectorfunctions.tpp"

using namespace std;

int main() {
    vector<int> my_vector;

    for (int i = 1; i < 4; i++) {
        my_vector.push_back(i);
        my_vector.push_back(i);
    }

    vector<int> filtered_vector = remove_duplicates(my_vector);

    cout << "Original vector: ";
    for (int i : my_vector) {
        cout << i << " ";
    }
    cout << endl;

    cout << "Filtered vector: ";
    for (int i : filtered_vector) {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}
