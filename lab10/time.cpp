/*
Author: Hyuncheol Lee
Course: CSCI 135
Instructor: Enxhi Osmanllari
Assignment: Lab 10

This program will calculate the minutes passed after midnight
This program will calculate the minutes in between two points
*/

#include <iostream>
using namespace std;

enum Genre {ACTION, COMEDY, DRAMA, ROMANCE, THRILLER};

class Time { 
    public:
        int h;
        int m;
};

class Movie { 
    public: 
        string title;
        Genre genre;     // only one genre per movie
        int duration;    // in minutes
};

class TimeSlot { 
    public: 
        Movie movie;     // what movie
        Time startTime;  // when it starts
};

int minutesSinceMidnight(Time time) {
    return time.h * 60 + time.m;
}

int minutesUntil(Time earlier, Time later) {
    return minutesSinceMidnight(later) - minutesSinceMidnight(earlier);
}

Time addMinutes(Time time0, int min) {
    int convertH = min / 60;
    int convertM = min % 60;

    if (time0.m + convertM >= 60) {
        time0.m += convertM - 60;
        time0.h += convertH + 1;     
    }
    else {
        time0.h += convertH;
        time0.m += convertM;
    }

    return time0;
}

void printTime(Time time) {
    cout << time.h << ":" << time.m;
}

void printMovie(Movie mv) {
    string g;
    switch (mv.genre) {
        case ACTION:
            g = "ACTION";
            break;
        case COMEDY:
            g = "COMEDY";
            break;
        case DRAMA:
            g = "DRAMA";
            break;
        case ROMANCE:
            g = "ROMANCE";
            break;
        case THRILLER:
            g = "THRILLER";
            break;
    }

    cout << mv.title << " " << g << " (" << mv.duration << " min)";
}

void printTimeSlot(TimeSlot ts) {
    Time afterMovie = addMinutes(ts.startTime, ts.movie.duration);
    printMovie(ts.movie);
    cout << " [starts at ";
    printTime(ts.startTime);
    cout << ", ends by ";
    printTime(afterMovie);
    cout << "]";
}

TimeSlot scheduleAfter(TimeSlot ts, Movie nextMovie) {
    Time afterTime = addMinutes(ts.startTime, ts.movie.duration);
    ts.movie.title = nextMovie.title;
    ts.movie.genre = nextMovie.genre;
    ts.movie.duration = nextMovie.duration;
    ts.startTime = afterTime;
    return ts;
}

bool timeOverlap(TimeSlot ts1, TimeSlot ts2) {
    bool overlap;
    int timeBetween;
    if (ts1.startTime.h < ts2.startTime.h) {
        timeBetween = minutesUntil(ts1.startTime, ts2.startTime);
        if (timeBetween <= ts1.movie.duration) {
            overlap = true;
        }
        else {
            overlap = false;
        }
    }
    else if (ts1.startTime.h == ts2.startTime.h && ts1.startTime.m == ts2.startTime.m) {
        overlap = true;
    }   
    else {
        timeBetween = minutesUntil(ts2.startTime, ts1.startTime);
        if (timeBetween <= ts2.movie.duration) {
            overlap = true;
        }
        else {
            overlap = false;
        }
    }
    return overlap;
}

int main() {
    return 0;
    /* Lab A
    int h1, m1, h2, m2;
    cout << "Enter first time: " << endl;
    cin >> h1 >> m1;
    cout << "Enter second time: " << endl;
    cin >> h2 >> m2;

    Time first = {h1, m1};
    Time second = {h2, m2};

    cout << "These moments of time are " << minutesSinceMidnight(first);
    cout << " and " << minutesSinceMidnight(second) << " minutes after midnight." << endl;

    cout << "The interval of time between them is " << minutesUntil(first, second) << " minutes. " << endl;
    */
}