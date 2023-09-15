/*
Author: Hyuncheol Lee
Course: CSCI 135
Instructor: Enxhi Osmanllari
Assignment: Lab 7b

This program will remove spaces
*/

#include <iostream>
#include <cctype>
using namespace std;

int countChar(string line, char c) {
    int count = 0;
    for (int i = 0; i < line.length(); i++) {
        if (line[i] == c) {
            count++;
        }
    }
    return count;
}

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
    string input = "";
    int difference = 0;
    while(getline(cin, input)) {
        if (removeLeadingSpaces(input)[0] == '}') {
            difference--;
        }
        for (int i = difference; i > 0; i--) {
            cout << "\t";
        }
        cout << removeLeadingSpaces(input) << endl;
        difference += countChar(input, '{');
        if (removeLeadingSpaces(input)[0] != '}') {
            difference -= countChar(input, '}');
        }
    }
}