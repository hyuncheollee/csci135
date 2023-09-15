/*
Author: Hyuncheol Lee
Course: CSCI 135
Instructor: Enxhi Osmanllari
Assignment: Lab 4g

This program will print out a checkerboard in a 3x3 format
*/

#include <iostream>
using namespace std;

int main() {
    int width, height;
    cout << "Input width: " << endl;
    cin >> width;
    cout << "Input height: " << endl;
    cin >> height;
    cout << "\nShape: " << endl;

    for (int i = 0; i < height; i++) {
        if (i % 6 == 0 || i % 6 == 1 || i % 6 == 2) {
            for (int j = 0; j < width; j++) {
                if (j % 6 == 0 || j % 6 == 1 || j % 6 == 2) {
                    cout << "*";
                }
                else if (j % 6 == 3 || j % 6 == 4 || j % 6 == 5) {
                    cout << " ";
                }
            }
        }
        
        else if (i % 6 == 3 || i % 6 == 4 || i % 6 == 5) {
            for (int k = 0; k < width; k++) {
                if (k % 6 == 0 || k % 6 == 1 || k % 6 == 2) {
                    cout << " ";
                }
                else if (k % 6 == 3 || k % 6 == 4 || k % 6 == 5) {
                    cout << "*";
                }
            }
        }
        cout << endl;
    }
}