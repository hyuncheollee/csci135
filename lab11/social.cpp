/* 
Name: Hyuncheol Lee
Course: CSCI135
Instructor: Gennadiy Maryash
Assignment: Lab 11a

This program create usernames and display names
*/

#include <iostream>
using namespace std;

class Profile {
    public:
        // constructors
        Profile();
        Profile(string usrn, string dspn);

        // getters
        string getUsername();
        string getFullName();
        
        // change the display name
        void setDisplayName(string dspn);
    private:
        // variables
        string username;
        string displayname;
};

// default constructor
Profile::Profile() {
    username = "";
    displayname = "";
}

Profile::Profile(string usrn, string dspn) {
    username = usrn;
    displayname = dspn;
}

// getters
string Profile::getUsername() {
    return username;
}

string Profile::getFullName() {
    return displayname + " (@" + getUsername() + ")";
}

// change display name
void Profile::setDisplayName(string dspn) {
    displayname = dspn;
}

int main() {
    Profile p1("marco", "Marco");    
    cout << p1.getUsername() << endl; // marco
    cout << p1.getFullName() << endl; // Marco (@marco)

    p1.setDisplayName("Marco Rossi"); 
    cout << p1.getUsername() << endl; // marco
    cout << p1.getFullName() << endl; // Marco Rossi (@marco)
    
    Profile p2("tarma1", "Tarma Roving");    
    cout << p2.getUsername() << endl; // tarma1
    cout << p2.getFullName() << endl; // Tarma Roving (@tarma1)
}