/*
Author: Hyuncheol Lee
Course: CSCI 135
Professor: Genady Maryash
Assignment: 9.5

Implement a class Rectangle
Provide a constructor to construct a rectangle with a given width and height
Member functions: get_perimeter and get_area that compute the perimeter and area
Member function: void resize(double factor) that resizes the rectangle by multiplying the width and height by the given factor.
*/

#include <iostream>
using namespace std;

class Rectangle {
    public:
        // construcs
        Rectangle(double w, double h);                  // param construc

        // getters
        double get_perimeter();                         // get perimeter
        double get_area();                              // get area

        // member functions
        void resize(double factor);                     // multiplies perimeter and area by given factor

    private:
        double width;
        double height;
};

// construcs
Rectangle::Rectangle(double w, double h) {
    width = w;
    height = h;
}

// get perimeter
double Rectangle::get_perimeter() {
    return 2 * (width + height);
}

// get area
double Rectangle::get_area() {
    return width * height;
}

// multiply by given factor
void Rectangle::resize(double factor) {
    width *= factor;
    height *= factor;
}