/*
Author: Hyuncheol Lee
Course: CSCI135
Professor: Genady Maryash
Assignment: 4.8

This program will return the middle portion of a sentence
*/

#include <iostream>
using namespace std;

string middle(string str) {
    int length = str.length();
    string result;

    if (length % 2 == 0) {
        length = length / 2;
        result = str[length - 1];
        result += str[length];
    }
    else if (length % 2 == 1) {
        length = length / 2;
        result = str[length];
    }
    
    return result;
}


int main() {
    return 0;
}