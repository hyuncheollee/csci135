/*
Author: Hyuncheol Lee
Course: CSCI 135
Instructor: Enxhi Osmanllari
Assignment: Lab 2a

It will ask the user to input a number between 1 and 100 and then square that number. If the user fails to provide a number with the given stipulation, they are asked to require another number
*/

#include <iostream>
using namespace std;

int main() {
    int input;
    cout << "Please enter an integer: " << endl;
    cin >> input;
    
    while (input < 1 || input > 99) {
        cout << "Please re-enter: " << endl;
        cin >> input;
    }

    if (input > 0 && input < 100) {
        cout << "Number squared is " << input * input << endl;
    }
}