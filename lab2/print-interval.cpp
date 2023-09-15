/*
Author: Hyuncheol Lee
Course: CSCI 135
Instructor: Enxhi Osmanllari
Assignment: Lab 2b

The program will ask the user for a lower limit and an upper limit and then print all the numbers in between the two given limits
*/

#include <iostream>
using namespace std;

int main() {
    int lower, upper;
    cout << "Please enter L: " << endl;
    cin >> lower;
    cout << "Please enter U: " << endl;
    cin >> upper;

    for (int i = lower; i < upper; i++) {
        cout << i << " ";
    }
}