/*
Author: Hyuncheol Lee
Course: CSCI135
Professor: Genady Maryash
Assignment: 5.15

This program will ask the user for three numbers and then sort them in ascending order
*/

#include <iostream>
using namespace std;

void sort3(int& a, int& b, int& c) {
    int tempA, tempB, tempC;
    tempA = a, tempB = b, tempC = c;
    if (a <= b && a <= c) {
        if (c <= b) {
            c = tempB;
            b = tempC;
        }    
    }
    else if (b <= a && b <= c) {
        if (a <= c) {
            a = tempB;
            b = tempA;
        }
        else if (c <= a) {
            a = tempB;
            b = tempC;
            c = tempA;
        }
    }
    else {
        if (a <= b) {
            a = tempC;
            b = tempA;
            c = tempB;
        }
        else if (b <= a) {
            a = tempC;
            c = tempA;
        }
    }

}

int main() {
    return 0;
}