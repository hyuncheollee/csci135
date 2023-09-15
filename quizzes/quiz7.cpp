/*
Author: Hyuncheol Lee
Course: CSCI-135
Instructor: Enxhi Osmanllari	
Assignment: Quiz 7

This program will return a string without the e's
*/

#include <iostream>
using namespace std;

void remove_e(string & sentence) {
    for (int i = 0; i < sentence.size(); i++) {
        if (sentence[i] == 'e') {
            sentence.erase(i,1);
        }
    }
}