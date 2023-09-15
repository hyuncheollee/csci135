/*
Author: Hyuncheol Lee
Course: CSCI135
Instructor: Enxhi Osmanllari
Assignment: Quiz 2

Prints the bigger number of two values
*/

#include <iostream>
using namespace std;

int main() {
    int x, y;
    cout << "Enter a number 'x': " << endl;
    cin >> x;
    cout << "Enter a number 'y': " << endl;
    cin >> y;
    if (x >= y) {
        cout << "The bigger number is " << x << endl;
    }
    else {
        cout << "The bigger number is " << y << endl;
    }
}