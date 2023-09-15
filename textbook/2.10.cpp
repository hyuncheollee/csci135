/*
Author: Hyuncheol Lee
Course: CSCI135
Professor: Genady Maryash
Assignment: 2.10

Asks the user of the number of gallons of gas is in the tank, the fuel efficiency in mpg, the price of gas per gallon. 
It then prints the cost per 100 miles and how far the car can go with the gas in the tank
*/

#include <iostream>
using namespace std;

int main() {
    int totalGas;
    double pricePerGallon, totalCost, totalDistance, milesPerGallon;
    cout << "How many gallons of gas is in the tank?" << endl;
    cin >> totalGas;
    cout << "How many miles per gallon? " << endl;
    cin >> milesPerGallon;
    cout << "What is the price of gas per gallon?" << endl;
    cin >> pricePerGallon;

    totalDistance = milesPerGallon * totalGas;
    totalCost = (100 / milesPerGallon) * pricePerGallon;
    cout << "The price per 100 miles is $" << totalCost << endl;
    cout << "You can go a maximum of " << totalDistance << " miles with the gas in the tank" << endl;
}