/*
Author: Hyuncheol Lee
Course: CSCI-135
Instructor: Enxhi Osmanllari	
Assignment: Quiz 9

This program will print out a checkerboard image
*/

if (col % 2 == 0) {
    if (col % 2 == 0) {
        out[row][col] = 0;
    }
    else {
        out[row][col] = img[row][col];
    }
}

else if (row % 2 != 0) {
    if (col % 2 == 0) {
        out[row][col] = img[row][col];
    }
    else {
        out[row][col] = 0;
    }
}