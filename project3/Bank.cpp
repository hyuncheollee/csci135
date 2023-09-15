/* 
Name: Hyuncheol Lee
Course: CSCI135
Instructor: Gennadiy Maryash
Assignment: Project 3

This program will do something with bank accounts
*/

#include <iostream>
#include <string>
#include "Bank.hpp"
using namespace std;

// Default Constructor
Bank::Bank() {
    numAccounts = 0;
}

string Bank::createAccount(string first, string last, string pin) {
    if (numAccounts < MAX_ACCOUNTS) {
        Account newAcc(first, last, pin);
        accounts[numAccounts] = newAcc;
        numAccounts++;
        return newAcc.getAccountNumber();
    }
    else {
        return "-1";
    }
}

bool Bank::removeAccount(string account) {
    bool found;
    for (int i = 0; i < numAccounts; i++) {
        if (account == accounts[i].getAccountNumber()) {
            found = true;
        }
        if (found) {
            accounts[i] = accounts[i + 1];
        }
        if (i == numAccounts - 1) {
            Account empty;
            accounts[i] = empty;
            numAccounts--;
            return true;
        }
    }
    
    return false;
}

bool Bank::withdraw(int withdraw, string account, string pin) {
    for (int i = 0; i < numAccounts; i++) {
        if (account == accounts[i].getAccountNumber() && pin == accounts[i].getPin()) {
            if (accounts[i].transaction(withdraw * -1)) {
                return true;
            }
            else {
                return false;
            }
        }
    }
    return false;
}

bool Bank::deposit(int deposit, string account, string pin) {
    for (int i = 0; i < numAccounts; i++) {
        if (account == accounts[i].getAccountNumber() && pin == accounts[i].getPin()) {
            if (accounts[i].transaction(deposit)) {
                return true;
            }
            else {
                return true;
            }
        }
    }
    return false;
}

int Bank::getAccountBalance(string account, string pin) {
    for (int i = 0; i < numAccounts; i++) {
        if (account == accounts[i].getAccountNumber() && pin == accounts[i].getPin()) {
            return accounts[i].getBalance();
        }
    }
    return -1;
}