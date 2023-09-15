/* 
Name: Hyuncheol Lee
Course: CSCI135
Instructor: Gennadiy Maryash

This program will take inputs from a seperate text file and navigate you through a maze
*/

#include <iostream>
using namespace std;




int main () {

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
    }
    
    if (row == 4 && column == 5) {
        cout << "You got out of the maze.\n";
    }
    else {
        cout << "You are stuck in the maze.\n";
    }


}
