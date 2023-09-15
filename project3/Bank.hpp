/* 
Name: Hyuncheol Lee
Course: CSCI135
Instructor: Gennadiy Maryash
Assignment: Project 3

This is a header file for the project
*/

#ifndef BANK_HPP
#define BANK_HPP
#include <iostream>
#include <string>
#include "Account.hpp"
using namespace std;

class Bank {
    public: 
        // constructors
        Bank();

        // functions
        string createAccount(string first, string last, string pin);    // calls the account class and creates an account
        bool removeAccount(string account);                         // removes an account
        bool withdraw(int withdraw, string account, string pin);    // takes money from an account
        bool deposit(int deposit, string account, string pin);      // puts money into an account
        int getAccountBalance(string account, string pin);          // tells you how much money is in the account
    private:
        static const int MAX_ACCOUNTS = 200;    // total number of accounts
        Account accounts[MAX_ACCOUNTS];         // an array of all the accounts
        int numAccounts;                        // the number of accounts in use
};

#endif