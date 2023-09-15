/*
Author: Hyuncheol Lee
Course: CSCI 135
Instructor: Enxhi Osmanllari
Assignment: Lab 7a

This program will remove spaces
*/

#include <iostream>
#include <cctype>
using namespace std;

string removeLeadingSpaces(string line) {
    bool letters;
    string result = "";
    for (int i = 0; i < line.length(); i++) {
        if (!isspace(line[i])) {
            letters = true;
        }
        if (letters) {
            result += line[i];
        }
    }
    return result;
}

int main() {
    string error;
    while (getline(cin, error)) {
        cout << removeLeadingSpaces(error) << endl;
    }
}