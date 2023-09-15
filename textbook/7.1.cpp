/*
Author: Hyuncheol Lee
Course: CSCI 135
Professor: Genady Maryash
Assignment: 7.1

*/

#include <iostream>
using namespace std;

void sort2(double* p, double* q) {
    if (*p > *q) {
        double temp = *p;
        *p = *q;
        *q = temp;
    }
}

int main() {
    double x = 5.7;
    double y = 3.2;
    sort2(&x, &y);
    cout << x << " " << y << endl;
    return 0;
}