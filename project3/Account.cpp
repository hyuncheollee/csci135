/* 
Name: Hyuncheol Lee
Course: CSCI135
Instructor: Gennadiy Maryash
Assignment: Project 3

This program will do something with bank accounts
*/

#include <iostream>
#include <string>
#include "Account.hpp"
using namespace std; 

// Default Constructor
Account::Account() {
    firstName = "anonymous";
    lastName = "anonymous";
    accountNumber = generateAccountNumber();
    pinNumber = "0000";
    accountBalance = 0;
}    

// Parameterized Constructor
Account::Account(string first, string last, string pin) {
    firstName = first;
    lastName = last;
    accountNumber = generateAccountNumber();
    if (pin.length() == 4) {
        pinNumber = pin;
    }
    else {
        pinNumber = "0000";
    }
    accountBalance = 0;
}

// Setters
void Account::setFirstName(string first) {
    firstName = first;
}

void Account::setLastName(string last) {
    lastName = last;
}

bool Account::setPin(string pin) {
    if (pin.length() == 4) {
        pinNumber = pin;
        return true;
    }
    else {
        return false;
    }
}

// Getters
string Account::getFirstName() {
    return firstName;
}

string Account::getLastName() {
    return lastName;
}

string Account::getAccountNumber() {
    return accountNumber;
}

string Account::getPin() {
    return pinNumber;
}

int Account::getBalance() {
    return accountBalance;
}

// transaction func
bool Account::transaction(int transaction) {
    if (transaction > 0) {
        accountBalance += transaction;
        return true;
    }
    else {
        if (accountBalance + transaction > 0) {
            accountBalance += transaction;
            return true;
        }
        else {
            return false;
        }
    }
}

// i want that acc number
string Account::generateAccountNumber() {
    string an_str = "";
    for (int i{0}; i < 8; i++) {
        int temp = rand() % 10;
        an_str += to_string(temp);
    }
    return an_str;
}