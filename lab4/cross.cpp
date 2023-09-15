/*
Author: Hyuncheol Lee
Course: CSCI 135
Instructor: Enxhi Osmanllari
Assignment: Lab 4c

This program will print out a cross according to the user's dimensions
*/

#include <iostream>
using namespace std;

int main() {
    int input;
    cout << "Input size: " << endl;
    cin >> input;
    cout << "Shape: " << endl;

    int start = 0;
    int end = input - 1;

    for (int i = 0; i < input; i++) { // this is the first half of the cross
        for (int j = 0; j < input; j++) {
            if (j == start || j == end) {
                cout << "*";
            }
            else if (j != start || j != end) {
                cout << " ";
            }    
        }
        start++;
        end--;
        cout << endl;
    }
}