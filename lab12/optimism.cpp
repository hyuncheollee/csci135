/* 
Name: Hyuncheol Lee
Course: CSCI135
Instructor: Gennadiy Maryash
Assignment: Lab 12b

This program will return a vector with only postive numbers
*/

#include <iostream>
#include <vector>
using namespace std;

vector<int> goodVibes(const vector<int> v) {
    vector<int> gv;
    for (int i = 0; i < v.size(); i++) {
        if (v[i] > 0) {
            gv.push_back(v[i]);
        }
    }
    return gv;
}

int main() {
    vector<int> v{1,2,-1,3,4,-1,6};

    goodVibes(v); // returns [1,2,3,4,6]

    return 0;
}