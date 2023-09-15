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
#include "Bank.hpp"
using namespace std; 

int main() {
    Bank chase;
    string pin = chase.createAccount("hyun", "lee", "1745");
    chase.deposit(50, pin, "1745");
    cout << chase.getAccountBalance(pin, "1745") << endl;
}