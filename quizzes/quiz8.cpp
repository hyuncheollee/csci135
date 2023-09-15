/*
Author: Hyuncheol Lee
Course: CSCI-135
Instructor: Enxhi Osmanllari	
Assignment: Quiz 8

This program will return the difference of open and closed curly brackets in a string
*/

#include <iostream>
using namespace std;

int unbalanced_brackets(string input) {
    int unbalanced = 0;
    for (int i = 0; i < input.length(); i++) {
        if (input[i] == '{') {
            unbalanced++;
        }
        else if (input[i] == '}') {
            unbalanced--;
        }
    }
    return unbalanced;
}

int main() {
    string input;
    cout << "Enter a string: ";
    cin >> input;
    cout << "Output: " << unbalanced_brackets(input) << endl;
}