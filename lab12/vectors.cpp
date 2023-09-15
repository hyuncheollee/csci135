/* 
Name: Hyuncheol Lee
Course: CSCI135
Instructor: Gennadiy Maryash
Assignment: Lab 12a

This program will initialize a vector with a given number
*/

#include <iostream>
#include <vector>
using namespace std;

vector<int> makeVector(int n) {
    vector<int> v;
    for (int i = 0; i < n; i++) {
        v.push_back(i);
    }
    return v;
}

int main() {
    return 0;
}