/*
Author: Hyuncheol Lee
Course: CSCI 135
Instructor: Enxhi Osmanllari
Assignment: Lab 4d

This program will print out a lower triangle according to the user's dimensions
*/

#include <iostream>
using namespace std;

int main() {
    int length;
    cout << "Input side length: " << endl;
    cin >> length;
    cout << endl << "Shape: " << endl;
    int count = 1;

    for (int i = 0; i < length; i++) {
        for (int j = 0; j < count; j++) {
            cout << "*";
        }
        count++;
        cout << endl;
    }
}