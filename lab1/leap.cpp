/*
Author: Hyuncheol Lee
Course: CSCI135
Instructor: Enxhi Osmanllari
Assignment: Lab 1c

This program asks for a year
It will then tell you if it is a leap year or not
*/

#include <iostream>
using namespace std;

int main() {
    int year;
    cout << "Enter year: " << endl;
    cin >> year;

    if (year % 4 != 0) {
        cout << "Common year" << endl;
    }
    else if (year % 100 != 0) {
        cout << "Leap year" << endl;
    }
    else if (year % 400 != 0) {
        cout << "Common year" << endl;
    }
    else {
        cout << "Leap year" << endl;
    }
    
}