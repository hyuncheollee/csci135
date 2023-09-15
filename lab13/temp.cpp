/* 
Name: Hyuncheol Lee
Course: CSCI135
Instructor: Gennadiy Maryash
Assignment: Lab 13

This program will loop using recursions
*/

#include <iostream>
using namespace std;

int main() {
    string sentence = "hyun";
    int length = sentence.length();
    bool backFrontEmptyEven = false;
    if (sentence[0] == 'h' && sentence[length - 1] == 's' && length % 2 == 1 || isblank(sentence[0])) {
        backFrontEmptyEven = true;
    }
    
    if (backFrontEmptyEven) {
        cout  << "true" << endl;
    }
    else {
        cout << "false\n";
    }
}