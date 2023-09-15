/*
Author: Hyuncheol Lee
Course: CSCI-135
Instructor: Enxhi Osmanllari	
Assignment: Quiz 9

This program will print out a checkerboard image
*/

#include <iostream>
using namespace std;

class Date {
    public:
        int month;
        int day;
        int year;
};

string formatDate(Date * d) {
    string month = to_string(d->month);
    string day = to_string(d->day);
    string year = to_string(d->year);
    if (month == "1") {
        month = "Jan";
    }
    else if (month == "2") {
        month = "Feb";
    }
    else if (month == "3") {
        month = "Mar";
    }
    else if (month == "4") {
        month = "Apr";
    }
    else if (month == "5") {
        month = "May";
    }
    else if (month == "6") {
        month = "June";
    }
    else if (month == "7") {
        month = "July";
    }
    else if (month == "8") {
        month = "Aug";
    }
    else if (month == "9") {
        month = "Sep";
    }
    else if (month == "10") {
        month = "Oct";
    }
    else if (month == "11") {
        month = "Nov";
    }
    else if (month == "12") {
        month = "Dec";
    }
    return month + " " + day + " " + year;
}

int main() {
    Date midterm1 = Date {10, 17, 2022};
    cout << formatDate(&midterm1) << endl;

    Date christmas = Date {12, 25, 2022};
    cout << formatDate(&christmas) << endl;
}