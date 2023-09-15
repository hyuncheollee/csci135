/*
Author: Hyuncheol Lee
Course: CSCI 135
Professor: Genady Maryash
Assignment: 8.1

Store the message “Hello, World!” in the file.
Close the file.
Open the same file again.
Read the message into a string variable and print it.
*/

#include <iostream>
#include <fstream>
using namespace std;

int main() {
    string message;

    ofstream outfile;
    outfile.open("hello.txt");
    if (outfile.fail()) {
        cout << "There was an error" << endl;
    }
    else {
        outfile << "Hello, World!";
        outfile.close();
    }

    ifstream infile;
    infile.open("hello.txt");
    if (infile.fail()) {
        cout << "There was an error" << endl;
    }
    else {
        getline(infile, message);
        cout << message;
        infile.close();
    }
}