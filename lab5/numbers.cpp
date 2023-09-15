/*
Author: Hyuncheol Lee
Course: CSCI 135
Instructor: Enxhi Osmanllari
Assignment: Lab 5a

This program will decide whether number a is divisible by number b
*/

#include <iostream>
using namespace std;

bool isDivisibleBy(int n, int d) {
    if (d == 0) {
        return false;
    }
    else if (n % d == 0) {
        return true;
    }
    else {
        return false;
    }
}

bool isPrime(int n) {
    if (n < 2) {
        return false;
    }
    else if (n > 1) {
        for (int i = 2; i < n; i++) {
            if (isDivisibleBy(n, i)) {
                return false;
            }
        }
    }
    return true;
}

int nextPrime(int n) {
    do {
        n++;
        if (isPrime(n)) {
            return n;
        }
    } while (isPrime(n) == false);
    return 0;
}

int countPrimes(int a, int b) {
    int counter = 0;
    for (int i = a; i <= b; i++) {
        if (isPrime(i) == true) {
            counter++;
        }
    }
    return counter;
}

bool isTwinPrime(int n) {
    if (isPrime(n)) {
        if (isPrime(n + 2) || isPrime(n - 2)) {
            return true;
        }
        else {
            return false;
        }
    }
    return false;
}

int nextTwinPrime(int n) {
    bool test;
    while (test == false) {
        n++;
        if (isTwinPrime(n) == true) {
            test = true;
        }
    }
    return n;
}

int largestTwinPrime(int a, int b) {
    for (int i = b; i >= a; i--) {
        if (isTwinPrime(i)) {
            return i;
        }
    }
    return -1;
}

int main() {
    cout << "Enter an starting point" << endl;
    int start;
    cin >> start;
    cout << "Enter an end point" << endl;
    int end;
    cin >> end;
    
    cout << largestTwinPrime(start, end) << endl;
}