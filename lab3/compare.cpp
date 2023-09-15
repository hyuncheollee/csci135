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
    string date, start, end;
    double eastSt, eastEl, westSt, westEl;
    
    cout << "Enter starting date: " << endl;
    cin >> start;
    cout << "Enter ending date: " << endl;
    cin >> end;
    int counter = 0;
    
    while (fin >> date >> eastSt >> eastEl >> westSt >> westEl) { 
        if (date == start) {
            counter++;
        }
        if (counter == 1) {
            if (eastEl > westEl) {
                cout << date << " East" << endl;
            }
            else if (westEl > eastEl) {
                cout << date << " West" << endl;
            }
            else {
                cout << date << " Equal" << endl;
            }
        }
        if (date == end) {
            counter++;
        }
    }
    

    fin.close();
}