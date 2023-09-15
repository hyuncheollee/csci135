/*
Author: Hyuncheol Lee
Course: CSCI 135
Professor: Genady Maryash
Assignment: 6.8

This program will check whether two arrays have the same elements in the same order
*/

#include <iostream> 
using namespace std;

bool equals(int a[], int a_size, int b[], int b_size) {
    if (a_size != b_size) {
        return false;
    }
    else {
        for (int i = 0; i < a_size; i++) {
            if (a[i] != b[i]) {
                return false;
            }
        }
    }
    return true;
}

int main() {
    return 0;
}