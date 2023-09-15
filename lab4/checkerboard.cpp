/*
Author: Hyuncheol Lee
Course: CSCI 135
Instructor: Enxhi Osmanllari
Assignment: Lab 4b

This program will input width and height and prints a rectangular checkerboard using asterisks and spaces
*/

#include <iostream>
using namespace std;

int main() {
    int width, height;
    cout << "Input width: " << endl;
    cin >> width;
    cout << "Input height: " << endl;
    cin >> height;

    for (int i = 0; i < height; i++) {
        if (i % 2 == 0) {
            for (int j = 0; j < width; j++) {
                if (j % 2 == 0) {
                    cout << "*";
                }
                else if (j % 2 == 1) {
                    cout << " ";
                }
            }    
        }
        else if (i % 2 == 1) {
            for (int k = 0; k < width; k++) {
                if (k % 2 == 0) {
                    cout << " ";
                }
                else if (k % 2 == 1) {
                    cout << "*";
                }
            }
        }
        cout << endl;
    }
}