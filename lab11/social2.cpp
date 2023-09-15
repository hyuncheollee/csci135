/* 
Name: Hyuncheol Lee
Course: CSCI135
Instructor: Gennadiy Maryash
Assignment: Lab 11b

This program create and store multiple users
*/

#include <cctype>
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

class Network {
    public:
        // constructors
        Network();
        
        // attempting to add
        bool addUser(string usrn, string dspn);
    private:
        static const int MAX_USERS = 20;    // max number of users
        int numUsers;                       // number of registered users
        Profile profiles[MAX_USERS];        // array of registered users
        int findID(string usrn);            // will find index of said user
};

// default constructor
Profile::Profile() {
    username = "";
    displayname = "";
}

// custom constructor
Profile::Profile(string usrn, string dspn) {
    username = usrn;
    displayname = dspn;
}

// default constructor
Network::Network() {
    numUsers = 0;
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

// find which user
int Network::findID(string usrn) {
    for (int i = 0; i <= numUsers; i++) {
        if (profiles[i].getUsername() == usrn) {
            return i;
        }
    }
    return -1;
}

// can i add a user?
bool Network::addUser(string usrn, string dspn) {
    if (usrn.length() > 0 && numUsers < MAX_USERS && findID(usrn) == -1) {
        for (int i = 0; i < usrn.length(); i++) {
            if (!isalnum(usrn[i])) {
                return false;
            }
        }
        Profile newUser(usrn, dspn);
        profiles[numUsers] = newUser;
        numUsers++;
        return true;
    }
    else {
        return false;
    }   
}

int main() {
    Network nw;
    cout << nw.addUser("mario", "Mario") << endl;     // true (1)
    cout << nw.addUser("luigi", "Luigi") << endl;     // true (1)

    cout << nw.addUser("mario", "Mario2") << endl;    // false (0)
    cout << nw.addUser("mario 2", "Mario2") << endl;  // false (0)
    cout << nw.addUser("mario-2", "Mario2") << endl;  // false (0)

    for (int i = 2; i < 20; i++)
        cout << nw.addUser("mario" + to_string(i), 
                    "Mario" + to_string(i)) << endl;   // true (1)

    cout << nw.addUser("yoshi", "Yoshi") << endl;     // false (0)
}