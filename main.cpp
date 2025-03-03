//
//  main.cpp
//  String Argument
//
//  Created by Vladislav Palant on 3/2/25.
//

#include <iostream>
using namespace std;

void pass_by_reference(string &my_string) {
    cout << my_string << endl;
    my_string += ", Oh Hi! This is the new line!";
    cout << my_string << endl;
    
}

void pass_by_value(string my_string) {
    cout << my_string << endl;
    my_string += ", Now this is the second new line!";
    cout << my_string << endl;
    
}


int main(int argc, const char * argv[]) {
    
    string my_string = "This is a string"; //Initial post.1
    
    cout << my_string << endl; //Print my first string again.2
    
    pass_by_value(my_string); //Prints my first string plus the second increment (value)
    
    cout << my_string << endl; // Print my first string again.2
    
    pass_by_reference(my_string); //prints my first string plus the second increment (reference)
    
    cout << my_string << endl; //print my first string original.2
    
    
    return 0;
}
