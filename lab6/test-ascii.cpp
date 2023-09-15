/*
Author: Hyuncheol Lee
Course: CSCI 135
Instructor: Enxhi Osmanllari
Assignment: Lab 6a

This program will print out every character and then the ascii number
*/

#include <iostream>
using namespace std;

int main() {
    string input;
    cout << "Input: " << endl;
    getline(cin, input);
  
    for (int i = 0; i < input.length(); i++) {
        cout << input[i] << " " << int(input[i]) << endl;
    }
}

