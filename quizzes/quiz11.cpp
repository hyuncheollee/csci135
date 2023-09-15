/*
Author: Hyuncheol Lee
Course: CSCI-135
Instructor: Enxhi Osmanllari	
Assignment: Quiz 10

This program will print out a rectangle consisting of 6 rows and 5 columns
*/

#include <iostream>
using namespace std;

class Money {
    public:
        int dollars;
        int cents;
};

Money withdraw_money(Money balance, Money withdrawal) {
    balance.cents -= withdrawal.cents;
    while (balance.cents < 0) {
        balance.cents += 100;
        balance.dollars -= 1;
    }
    balance.dollars -= withdrawal.dollars;
    if (balance.dollars < 0 || balance.cents < 0) {
        balance.dollars = 0;
        balance.cents = 0;
    }
    return balance;
}

int main() {
    Money starting = {100, 00};
    Money withdrawal = {2, 75};
    Money ending = withdraw_money(starting, withdrawal);
    cout << '$' << ending.dollars << '.' << ending.cents << endl;
}