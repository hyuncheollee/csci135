/*
Author: Hyuncheol Lee
Course: CSCI 135
Instructor: Enxhi Osmanllari
Assignment: Lab 6d

This program will decrypt both styles
*/

#include <iostream>
using namespace std;

// generally useful

bool uppercaseEnc(char c, int rshift) {
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

bool lowercaseEnc(char c, int rshift) {
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

char shiftCharEnc(char c, int rshift) {
    if (uppercaseEnc(c, rshift) || lowercaseEnc(c, rshift)) {
        return char(int(c) + rshift);
    }
    else {
        return char(int(c) + rshift - 26);
    }
}

bool uppercaseDec(char c, int rshift) {
    if (int(c) > 64 && int(c) < 91) {
        if (int(c) - rshift > 64 && int(c) - rshift < 91) {
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

bool lowercaseDec(char c, int rshift) {
    if (int(c) > 96 && int(c) < 123) {
        if (int(c) - rshift > 96 && int(c) - rshift < 123) {
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

char shiftCharDec(char c, int rshift) {
    if (uppercaseDec(c, rshift) || lowercaseDec(c, rshift)) {
        return char(int(c) - rshift);
    }
    else {
        return char(int(c) - rshift + 26);
    }
}

int keyNumber(string key, int index) {
    index = index % key.length();
    return int(key[index] - 97);
}


string encryptCaesar(string plaintext, int rshift) {
    string ciphered = "";
    for (int i = 0; i < plaintext.length(); i++) {
        if (isalpha(plaintext[i])) {
            ciphered += shiftCharEnc(plaintext[i], rshift);
        }
        else {
            ciphered += plaintext[i];
        }
    }
    return ciphered;
}

string decryptCaesar(string ciphertext, int rshift) {
    string decrypted = "";
    for (int i = 0; i < ciphertext.length(); i++) {
        if (isalpha(ciphertext[i])) {
            decrypted += shiftCharDec(ciphertext[i], rshift);
        }
        else {
            decrypted += ciphertext[i];
        }
    }
    return decrypted;
}


string encryptVigenere(string plaintext, string keyword) {
    string encrypted = "";
    int index = 0;
    for (int i = 0; i < plaintext.length(); i++) {
        if (isalpha(plaintext[i])) {
            encrypted += shiftCharEnc(plaintext[i], keyNumber(keyword, index));
            index++;
        }
        else {
            encrypted += plaintext[i];
        }
    }
    return encrypted;
}

string decryptVigenere(string ciphertext, string keyword) {
    string decrypted = "";
    int index = 0;
    for (int i = 0; i < ciphertext[i]; i++) {
        if (isalpha(ciphertext[i])) {
            decrypted += shiftCharDec(ciphertext[i], keyNumber(keyword, index));
            index++;
        }
        else {
            decrypted += ciphertext[i];
        }
    }
    return decrypted;
}

int main () {
    string ptext, keyword;
    int shift;
    cout << "Enter plaintext: " << endl;
    getline(cin, ptext);
    cout << endl;

    cout << "= Caesar =" << endl;
    cout << "Enter shift    : " << endl;
    cin >> shift;
    cout << "Ciphertext     : " << encryptCaesar(ptext, shift) << endl;
    cout << "Decrypted      : " << decryptCaesar(encryptCaesar(ptext, shift), shift) << endl;
    cout << endl;

    cout << "= Vigenere =" << endl;
    cout << "Enter keyword  : " << endl;
    cin >> keyword;
    cout << "Ciphertext     : " << encryptVigenere(ptext, keyword) << endl;
    cout << "Decrypted      : " << decryptVigenere(encryptVigenere(ptext, keyword), keyword) << endl;
}