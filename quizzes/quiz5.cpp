/*
Author: Hyuncheol Lee
Course: CSCI-135
Instructor: Enxhi Osmanllari	
Assignment: Quiz 5

This program will print out a rectangle consisting of 6 rows and 5 columns
*/

#include <iostream>
using namespace std;

int main() {
    for (int i = 0; i < 6; i++) {
        for (int j = 0; j < 5; j++) {
            cout << "+";
        }
        cout << endl;
    }
}