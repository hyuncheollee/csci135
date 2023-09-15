/* 
Name: Hyuncheol Lee
Course: CSCI135
Instructor: Gennadiy Maryash
Assignment: Lab 12d

This program will return a vector with only postive numbers
*/

#include <iostream>
#include <vector>
using namespace std;

vector<int> sumPairWise(vector<int> &v1, vector<int> &v2) {
    vector<int> sum;
    int temp;
    if (v1.size() >= v2.size()) {
        for (int i = 0; i < v1.size(); i++) {
            if (i < v2.size()) {
                sum.push_back(v1[i] + v2[i]);
            }
            else {
                sum.push_back(v1[i]);
            }
        }
    }
    else {
        for (int i = 0; i < v2.size(); i++) {
            if (i < v1.size()) {
                sum.push_back(v1[i] + v2[i]);
            }
            else {
                sum.push_back(v2[i]);
            }
        }
    }
    return sum;
}

int main() {
    vector<int> v1{1,2,3};
    vector<int> v2{4,5};

    sumPairWise(v1, v2); // returns [5, 7, 3]

    return 0;
}