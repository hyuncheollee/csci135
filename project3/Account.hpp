/* 
Name: Hyuncheol Lee
Course: CSCI135
Instructor: Gennadiy Maryash
Assignment: Project 3

This is a header file for the project
*/

#ifndef ACCOUNT_HPP
#define ACCOUNT_HPP
#include <iostream>
#include <string>
using namespace std;

class Account {
    public:
        // Constructors
        Account();                                                                                                                                                                    
        Account(string first, string last, string pin);                 

        // Setters
        void setFirstName(string first);                        
        void setLastName(string last);                          
        bool setPin(string pin);                               

        // Getters
        string getFirstName();                                  
        string getLastName();                                   
        string getAccountNumber();                              
        string getPin();                                        
        int getBalance();           

        // something else                    
        bool transaction(int transac);
    private:
        // variables
        string firstName;                   
        string lastName;
        string accountNumber;
        string pinNumber;
        int accountBalance;

        // something else
        string generateAccountNumber();
};

#endif