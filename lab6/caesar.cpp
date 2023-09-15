/*
Author: Hyuncheol Lee
Course: CSCI 135
Instructor: Enxhi Osmanllari
Assignment: Lab 6b

This program will shift the character caesar style
*/

#include <iostream> 
using namespace std;

bool uppercase(char c, int rshift) {
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

bool lowercase(char c, int rshift) {
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

char shiftChar(char c, int rshift) {
    if (uppercase(c, rshift) || lowercase(c, rshift)) {
        return char(int(c) + rshift);
    }
    else {
        return char(int(c) + rshift - 26);
    }
}

string encryptCaesar(string plaintext, int rshift) {
    string ciphered = "";
    for (int i = 0; i < plaintext.length(); i++) {
        if (isalpha(plaintext[i])) {
            ciphered += shiftChar(plaintext[i], rshift);
        }
        else {
            ciphered += plaintext[i];
        }
    }
    return ciphered;
}

int main() {
    string ptext;
    int shift;
    cout << "Enter plaintext: " << endl;
    getline(cin, ptext);
    cout << "Enter shift    : " << endl;
    cin >> shift;
    cout << "Ciphertext     : " << encryptCaesar(ptext, shift) << endl;
}

