/*
Author: Hyuncheol Lee
Course: CSCI 135
Instructor: Enxhi Osmanllari
Assignment: Lab 4e

This program will print out a cross according to the user's dimensions
*/

#include <iostream>
using namespace std;

int main() {
    int length;
    cout << "Input side length: " << endl;
    cin >> length;
    cout << "\nShape: " << endl;

    for (int i = 0; i < length; i++) {
        for (int j = 0; j < length; j++) {
            if (j >= i) {
                cout << "*";
            }
            else {
                cout << " ";
            }
        }
        cout << endl;
    }
}