/*
Author: Hyuncheol Lee
Course: CSCI-135
Instructor: Enxhi Osmanllari	
Assignment: Quiz 5

This program will print out a rectangle consisting of 6 rows and 5 columns
*/

#include <iostream>
using namespace std;

int max3(int a, int b, int c) {
    if (a > b && a > c) {
        return a;
    }
    else if (b > a && b > c) {
        return b;
    }
    else {
        return c;
    }
}

int main () {
    cout << max3(-5, 0, 1000);
}