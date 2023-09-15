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
    
    cout << "Enter earlier date: " << endl;
    cin >> start;
    cout << "Enter later date: " << endl;
    cin >> end;
    int counter = 0;
    int num = 0;
    int year = 365;
    double elevation[365];
    string naljja[365];

    while (fin >> date >> eastSt >> eastEl >> westSt >> westEl) { 
        if (date == start) {
            counter++;
        }
        if (counter == 1) {
            naljja[num] = date;
            elevation[num] = westEl;
            num++;
        }
        if (date == end) {
            counter++;
        }
    }
     /*   
    string newNaljja[365];
    int index = 0;

    for (int i = num; i > 0; i--) {
        newNaljja[index] = naljja[i];
        index++;
    }

    for (int i = 0; i <= num; i++) {
        cout << newNaljja[i] << " " << elevation[i] << " ft" << endl;
    }
    */
    for (int i = num; i >= 0; i--) {
        cout << naljja[i] << " " << elevation[i] << " ft" << endl;
    }


    fin.close();
}