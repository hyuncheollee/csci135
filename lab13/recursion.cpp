/* 
Name: Hyuncheol Lee
Course: CSCI135
Instructor: Gennadiy Maryash
Assignment: Lab 13

This program will loop using recursions
*/

#include <iostream>
using namespace std;

void printRange(int left, int right) {          // prints all numbers from start to end
    if (left <= right) {
        cout << left << " ";
        printRange(left + 1, right);
    }
}

int sumRange(int left, int right) {             // prints the sum of all the numbers in between
    if (left <= right) {
        return left + sumRange(left + 1, right);
    }
    else {
        return 0;
    }
}

int sumArray(int *arr, int size) {              // will add up all the numbers in the array
    if (size > 0) {
        return arr[size - 1] + sumArray(arr, size - 1);
    }
    else {
        return 0;
    }
}

bool isAlphanumeric(string s) {                 // will check if a string is all alphanumeric
    int currentLength = s.length() - 1;
    if (isalnum(s[0]) && currentLength > 0) {
        return isAlphanumeric(s.substr(1, currentLength));
    }
    else if (!isalnum(s[0])) {
        return false;
    }
    return true;
}

bool nestedParens(string s) {                   // will check if the parenthesis are correct and nothing in between
    int length = s.length();
    bool backFrontEmptyEven = false;
    if (s[0] == '(' && s[length - 1] == ')' && length % 2 == 0 || isblank(s[0])) {
        backFrontEmptyEven = true;
    }
    if (length % 2 == 0 && s.length() > 1 && s[0] == '(' && s[s.length() - 1] == ')') {
        return nestedParens(s.substr(1, length - 2));
    }
    else if (s[0] != '(' || s[s.length() - 1] == ')') {                  
        return false;
    }
    return true;
}

// bool divisible(int *prices, int size);       // bonus work

int main() {
    cout << nestedParens("((()))") << endl;      // true  (1)
    cout << nestedParens("()") << endl;          // true  (1)
    cout << nestedParens("") << endl;            // true  (1)
    cout << endl;

    cout << nestedParens("(((") << endl;         // false (0)
    cout << nestedParens("(()") << endl;         // false (0)
    cout << nestedParens(")(") << endl;          // false (0)
    cout << nestedParens("a(b)c") << endl;       // false (0)
    
    return 0;
}