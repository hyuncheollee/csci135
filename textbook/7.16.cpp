/*
Author: Hyuncheol Lee
Course: CSCI 135
Professor: Genady Maryash
Assignment: 7.16

Define a structure Point. A point has an x- and a y-coordinate.
Write a function double distance(Point a, Point b) that computes the distance from a to b.
Write a program that reads the coordinates of the points, calls your function, and displays the result.
*/

#include <cmath>
#include <iostream>
using namespace std;

struct Point {
    double x;
    double y;
};

double distance(Point a, Point b) {
    double x1Length = a.x;
    double y1Length = a.y;
    double x2Length = b.x;
    double y2Length = b.y;
    double xMinus = x2Length - x1Length;
    double yMinus = y2Length - y1Length;
    double xSquared = xMinus * xMinus;
    double ySquared = yMinus * yMinus;
    double combined = xSquared + ySquared;
    return sqrt(combined);
}

int main() {
    double x1, x2, y1, y2;
    cout << "Enter the first coordinates " << endl;
    cin >> x1 >> y1;
    cout << "Enter the second coordinates: " << endl;
    cin >> x2 >> y2;

    Point pointA = {x1, y1};
    Point pointB = {x2, y2};

    double distanceBetween = distance(pointA, pointB);
    cout << distanceBetween << endl;
    return 0;
}