/*
Author: Hyuncheol Lee
Course: CSCI 135
Instructor: Enxhi Osmanllari
Assignment: Lab 2c

This program prints 10 indexes of 1 and then will ask the user for an index and a new number.
If the index and the new numbers fit within the parameters,
then that index is updated to the new number until the user gives numbers outside the parameters
*/

#include <iostream>
using namespace std;

int main() {
    int myData[10];
    for (int i = 0; i < 10; i++) {
        myData[i] = 1;
    }
    bool test;
    do {
        for (int g = 0; g < 10; g++) {
            cout << myData[g] << " ";
        }
        int newIndex = 0;
        int newValue;
        cout << endl << "Input index: " << endl;
        cin >> newIndex;
        cout << "Input value: " << endl;
        cin >> newValue;
        if (newIndex >= 0 && newIndex < 10) {
            myData[newIndex] = newValue;
            test = true;
        }   
        else {
            test = false;
        }
    } while (test == true);
    cout << "Index out of range. Exit" << endl;
    return 0;
}
