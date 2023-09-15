/*
Author: Hyuncheol Lee
Course: CSCI 135
Instructor: Enxhi Osmanllari
Assignment: 3a
*/

#include <iostream>
#include <fstream>
#include <cstdlib>
#include <climits>
using namespace std;

int main() {
    ifstream fin("Current_Reservoir_Levels.tsv");
    if (fin.fail()) {
        cerr << "File cannot be opened for reading." << endl;
        exit(1);
    }

    string junk;
    getline(fin, junk);
    string date, input;
    double eastSt, eastEl, westSt, westEl;

    cout << "Enter date: " << endl;
    cin >> input;

    while(fin >> date >> eastSt >> eastEl >> westSt >> westEl) { 
        if (input == date) {
            cout << "East basin storage: " << eastSt << " billion gallons" << endl;
        }
    }
    fin.close();
}