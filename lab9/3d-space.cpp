/*
Author: Hyuncheol Lee
Course: CSCI 135
Instructor: Enxhi Osmanllari
Assignment: Lab 9

This program will do things with vectors
*/

#include <cmath>
#include <iostream>
using namespace std;

class Coord3D {
    public:
        double x;
        double y;
        double z;
};

double length(Coord3D *p) {
    double xlength = p -> x;
    double ylength = p -> y;
    double zlength = p -> z;
    double xsquared = xlength * xlength;
    double ysquared = ylength * ylength;
    double zsquared = zlength * zlength;
    double combined = xsquared + ysquared + zsquared;
    return sqrt(combined);
}

Coord3D* fartherFromOrigin(Coord3D *p1, Coord3D *p2) {
    double length1 = length(p1);
    double length2 = length(p2);
    
    if (length1 >= length2) {
        return p1;
    }
    else {
        return p2;
    }
}

void move(Coord3D *ppos, Coord3D *pvel, double dt) {
    double x = ppos -> x;
    double y = ppos -> y;
    double z = ppos -> z;
    double velx = pvel -> x;
    double vely = pvel -> y;
    double velz = pvel -> z;
    ppos -> x = x + velx * dt;
    ppos -> y = y + vely * dt;
    ppos -> z = z + velz * dt;
}

Coord3D* createCoord3D(double x, double y, double z) {
    Coord3D *pnew = new Coord3D;
    *pnew = {x, y, z};
    return pnew;
}

void deleteCoord3D(Coord3D *p) {
    delete p;
}

int main() {
    double x, y, z;
    cout << "Enter position: ";
    cin >> x >> y >> z;
    Coord3D *ppos = createCoord3D(x, y, z);
    
    cout << "Enter velocity: ";
    cin >> x >> y >> z;
    Coord3D *pvel = createCoord3D(x, y, z);

    move(ppos, pvel, 10.0);

    cout << "Coordinates after 10 seconds: " 
         << (*ppos).x << " " << (*ppos).y << " " << (*ppos).z << endl;

    deleteCoord3D(ppos); // release memory
    deleteCoord3D(pvel);

    /*
    Enter position: 10 20 30
    Enter velocity: 5.5 -1.4 7.77
    Coordinates after 10 seconds: 65 6 107.7
    */
}