/*
Author: Hyuncheol Lee
Course: CSCI 135
Professor: Genady Maryash
Assignment: 7.18

Define a structure Triangle that contains three Point members. 
Write a function that computes the perimeter of a Triangle. 
Write a program that reads the coordinates of the points, calls your function, and displays the result.
*/

#include <cmath>
#include <iostream>
using namespace std;

struct Point {
    double x;
    double y;
};

struct Triangle {
    Point pointA;
    Point pointB;
    Point pointC;
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

double perimeter(Triangle triangle) {
    double sideAB = distance(triangle.pointA, triangle.pointB);
    double sideAC = distance(triangle.pointA, triangle.pointC);
    double sideBC = distance(triangle.pointB, triangle.pointC);
    return sideAB + sideAC + sideBC;
}

int main() {
    double x1, x2, x3, y1, y2, y3;
    cout << "Enter the first coordinates" << endl;
    cin >> x1 >> y1;
    cout << "Enter the second coordinates" << endl;
    cin >> x2 >> y2;
    cout << "Enter the third coordinates" << endl;
    cin >> x3 >> y3;
    
    Point pointA = {x1, y1};
    Point pointB = {x2, y2};
    Point pointC = {x3, y3};
    Triangle triangle = {pointA, pointB, pointC};
    double length = perimeter(triangle);

    cout << "The three points are (" << pointA.x <<", " << pointA.y << "), (";
    cout << pointB.x << ", " << pointB.y << "), (";
    cout << pointC.x << ", " << pointC.y << ")." << endl;
    cout << "The perimeter is " << length << endl; 
    return 0;
}