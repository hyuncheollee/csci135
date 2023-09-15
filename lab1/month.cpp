/*
Author: Hyuncheol Lee
Course: CSCI 135
Instructor: Enxhi Osmanllari
Assignment: Lab 1d
 
This program will ask for a year and a month
It will then tell you how many days are in that month
*/
 
#include <iostream>
using namespace std;
 
int main() {
    int year, month;
    cout << "Enter year: " << endl;
    cin >> year;
    cout << "Enter month: " << endl;
    cin >> month;

    if (month > 7 and month % 2 == 0) {
        cout << "31 days" << endl;
    }

    else if (month > 7 and month % 2 == 1) {
        cout << "30 days" << endl;
    }
 
    else if (month < 8 and month % 2 == 1) {
        cout << "31 days" << endl;
    }	
 
    else if (month < 8 and month % 2 == 0 and month != 2) {
        cout << "30 days" << endl;
    }
 
    else {
        if (year % 4 != 0) {
            cout << "28 days" << endl;
        }
        else if (year % 100 != 0) {
            cout << "29 days" << endl;
        }
        else if (year % 400 != 0) {
            cout << "28 days" << endl;
        }   
        else {
            cout << "29 days" << endl;
        }
    }
}
