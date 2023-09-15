/*
Author: Hyuncheol Lee
Course: CSCI135
Professor: Genady Maryash
Assignment: 3.1

This program will read an integer and tell you whether it is positive, negative, or a zero
*/

#include <iostream>
using namespace std;

int main() {
    int number;
    cin >> number;

    if (number > 0) {
        cout << "The number is positive\n";
    }

    else if (number == 0) {
        cout << "The number is zero\n";
    }

    else {
        cout << "The number is negative\n";
    }
}