/*
Author: Hyuncheol Lee
Course: CSCI 135
Instructor: Enxhi Osmanllari
Assignment: 3
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
        exit(1); // exit if failed to open the file
    }
    
    string junk;
    getline(fin, junk);
    string date; 
    double eastSt, eastEl, westSt, westEl;

    while(fin >> date >> eastSt >> eastEl >> westSt >> westEl) { 
    // this loop reads the file line-by-line
    // extracting 5 values on each iteration 

    fin.ignore(INT_MAX, '\n'); //skips to the end of line, 
    //ignorring the remaining columns 

    // for example, to print the date and East basin storage:
    cout << date << " " << eastSt << " " << eastEl << " " << westSt << " " << westEl << endl;
    }



    fin.close();
}