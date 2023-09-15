/*
Author: Hyuncheol Lee
Course: CSCI135
Professor: Genady Maryash
Assignment: 3.5

This program will read 3 integers and tell you if they either in increasing, decreasing or no order at all
*/

#include <iostream>
using namespace std;

int main() {
    cout << "Enter three integers\n";
    int first, second, third;
    cin >> first >> second >> third;

    if (first < second && second < third) {
        cout << "The numbers are in increasing order\n";
    }

    else if (first > second && second > third) {
        cout << "The numbers are in decreasing order\n";
    }

    else {
        cout << "The numbers are in neither order\n";
    }
}