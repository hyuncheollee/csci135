/*
Author: Hyuncheol Lee
Course: CSCI 135
Instructor: Enxhi Osmanllari
Assignment: Project Task C

This program will take inputs from a seperate text file and navigate you through a maze 
from multiple sentences seperated by a semicolon
*/

#include <iostream>
using namespace std;

int main() {
    int maze[6][6] = {
        1,0,1,1,1,1,
        1,0,0,0,1,1,
        1,0,1,0,0,1,
        1,0,1,0,1,1,
        1,0,0,0,0,0,
        1,1,1,1,1,1
    };
    char input;
    int column = 1;
    int row = 0;
    while (cin >> input) {
        if (input == 'U' && maze[row - 1][column] == 0) {
            row--;
        }
        else if (input == 'D' && maze[row + 1][column] == 0) {
            row++;
        }
        else if (input == 'L' && maze[row][column - 1] == 0) {
            column--;
        }
        else if (input == 'R' && maze[row][column + 1] == 0) {
            column++;
        }
        if (input == ';') {
            if (row == 4 && column == 5) {
                cout << "You got out of the maze.\n";
                row = 0;
                column = 1;
            }
            else {
                cout << "You are stuck in the maze.\n";
                row = 0;
                column = 1;
            }
        }
    }
}