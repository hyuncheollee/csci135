/*
Author: Hyuncheol Lee
Course: CSCI135
Instructor: Enxhi Osmanllari
Assignment: Lab 1b

This program will ask the user for 3 numbers
It will then output the smallest of the three
*/

#include <iostream>
using namespace std;

int main() {
    int first, second, third, smaller, smallest;
    cout << "Enter the first number: " << endl;
    cout << "Enter the second number: " << endl;
    cout << "Enter the third number: " << endl;
    cin >> first >> second >> third;

    if (first <= second ) {
        smaller = first;
    }
    else {
        smaller = second;
    }

    if (smaller <= third) {
        smallest = smaller;
    }
    else {
        smallest = third;
    }

    cout << "The smaller of the three is " << smallest << endl;

}