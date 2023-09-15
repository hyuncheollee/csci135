/*
Author: Hyuncheol Lee
Course: CSCI 135
Instructor: Enxhi Osmanllari
Assignment: 3b

This program will read all the east basin storage values and tell the user the minimum and the maximum
values of the basin.
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
    double start = eastSt;
    double min = 100000.00;
    double max = start;

    while(fin >> date >> eastSt >> eastEl >> westSt >> westEl) { 
        if (eastSt < min) {
            min = eastSt;
        }
        if (eastSt > max) {
            max = eastSt;
        }        
    }
    cout << "minimum storage in East basin: " << min << " billion gallons" << endl;
    cout << "MAXimum storage in East basin: " << max << " billion gallons" << endl;

    fin.close();
}