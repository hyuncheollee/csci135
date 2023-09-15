/*
Author: Hyuncheol Lee
Course: CSCI-135
Instructor: Enxhi Osmanllari
Assignment: Quiz 3

This program will initialize an array of numbers from 1 to 10 on a seperate line
*/

#include <iostream>
using namespace std;

int main() {
    int numbers[10]; 
    for (int i = 0; i < 10; i++) {
        numbers[i] = i + 1;
        cout << numbers[i] << endl;
    }
}