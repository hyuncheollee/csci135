/*
Author: Hyuncheol Lee
Course: CSCI 135
Instructor: Enxhi Osmanllari
Assignment: Lab 4f

This program will print out a trapezoid
*/

#include <iostream> 
using namespace std;

int main() {
    int width, height;
    cout << "Input width: " << endl;
    cin >> width;
    cout << "Input height: " << endl;
    cin >> height;

    int widthTest = width;
    int heightTest = height;
    bool test;
    for (int i = 0; i < heightTest; i++) {
        widthTest -= 2;
    }
    if (widthTest > -2) {
        test = true;
    }
    
    if (test == true) {
        int start = 0;
        cout << "\nShape: " << endl;

        for (int i = 0; i < height; i++) {
            for (int j = 0; j < width; j++) {
                if (j >= start) {
                    cout << "*";
                }
                else {
                    cout << " ";
                }
            }
            width--;
            start++;
            cout << endl;
        }
    }
    
    else {
        cout << "Impossible shape!" << endl;
    }
}