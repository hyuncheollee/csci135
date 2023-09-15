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
    int maze[10][10];
    int range = 0;
    while(range != 10) {
        for (int i = 0; i < 10; i++) {
            for (int j = 0; j < 10; j++) {
                cin >> maze[i][j];
            }
            range++;
        }
    }

    char input;
    int column = 0;
    int row = 1;

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
        if (input == ';' && row != 1 && column != 0) {
            if (row == 9 && column == 1) {
                cout << "You got out of the maze.\n";
                row = 1;
                column = 0;
            }
            else {
                cout << "You are stuck in the maze\n";
                row = 1;
                column = 0;
            }
        }
    }
}