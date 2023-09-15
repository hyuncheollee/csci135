/*
Author: Hyuncheol Lee
Course: CSCI135
Professor: Genady Maryash
Assignment: 4.8

This program will read a word and print the word out letter by letter
*/

#include <iostream>
using namespace std;

int main() {
    cout << "Enter a word\n";
    string word;
    cin >> word;
    int length = word.length();
    for (int i = 0; i < length; i++) {
        cout << word[i] << endl;
    }
}