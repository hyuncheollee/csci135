/*
Author: Hyuncheol Lee
Course: CSCI135
Professor: Genady Maryash
Assignment: 5.14

This program will ask the user for two numbers and print out the larger number
*/

#include <iostream>
using namespace std;

void sort2(int& a, int& b) {
    int temp;
    if (a >= b) {
        temp = a;
        a = b;
        b = temp;
    }
}

int main() {
    return 0;
}