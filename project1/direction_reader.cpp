/* 
Name: Hyuncheol Lee
Course: CSCI135
Instructor: Gennadiy Maryash

This program will take inputs from a seperate text file
*/

#include <iostream>
using namespace std;

int main() {
    string input;
    while (cin >> input) {
        if (input == "R") {
            cout << "Right\n";
        }
        else if (input == "L") {
            cout << "Left\n";
        }
        else if (input == "U") {
            cout << "Up\n";
        }
        else if (input == "D") {
            cout << "Down\n";
        }
        else {
            cout << "I'm confused\n";
        }
    }
}