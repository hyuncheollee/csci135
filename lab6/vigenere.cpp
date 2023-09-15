/*
Author: Hyuncheol Lee
Course: CSCI 135
Instructor: Enxhi Osmanllari
Assignment: Lab 6c

This program will shift the character vigenere style
*/

#include <iostream>
using namespace std;

bool upper(char c, int rshift) {
    if (int(c) > 64 && int(c) < 91) {
        if (int(c) + rshift > 64 && int(c) + rshift < 91) {
            return true;
        }
        else {
            return false;
        }
    }
    else {
        return false;
    }
}

bool lower(char c, int rshift) {
    if (int(c) > 96 && int(c) < 123) {
        if (int(c) + rshift > 96 && int(c) + rshift < 123) {
            return true;
        }
        else {
            return false;
        }
    }
    else {
        return false;
    }
}

int keyNumber(string key, int index) {
    index = index % key.length();
    return int(key[index] - 97);
}

char shift(char c, int rshift) {
    if (uppercase(c, rshift) || lowercase(c, rshift)) {
        return char(int(c) + rshift);
    }
    else {
        return char(int(c) + rshift - 26);
    }
}

string encryptVigenere(string plaintext, string keyword) {
    string encrypted = "";
    int index = 0;
    for (int i = 0; i < plaintext.length(); i++) {
        if (isalpha(plaintext[i])) {
            encrypted += shift(plaintext[i], keyNumber(keyword, index));
            index++;
        }
        else {
            encrypted += plaintext[i];
        }
    }
    return encrypted;
}
    
int main() {
    string text, key;
    cout << "Enter plaintext: " << endl;
    getline(cin, text);
    cout << "Enter keyword  : " << endl;
    cin >> key;
    cout << "Ciphertext     : " << encryptVigenere(text, key) << endl;
}