/* 
Name: Hyuncheol Lee
Course: CSCI135
Instructor: Gennadiy Maryash
Assignment: Lab 11c

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
        
        // following
        bool follow(string usrn1, string usrn2);

        // print dot file
        void printDot();
    private:
        static const int MAX_USERS = 20;            // max number of users
        int numUsers;                               // number of registered users
        Profile profiles[MAX_USERS];                // array of registered users
        int findID(string usrn);                    // will find index of said user
        bool following[MAX_USERS][MAX_USERS];       // friendship matrix ??
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
    for (int i = 0; i < MAX_USERS; i++) {
        for (int j = 0; j < MAX_USERS; j++) {
            following[i][j] = false;
        }
    }
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

// i wanna send a follow request
bool Network::follow(string usrn1, string usrn2) {
    if (findID(usrn1) != -1 && findID(usrn2) != -1) {
        following[findID(usrn1)][findID(usrn2)] = true;
        return true;
    }
    else {
        return false;
    }
}

// gimme a visual example
void Network::printDot() {
    cout << "digraph {" << endl;
    for (int i = 0; i < numUsers; i++) {
        cout << "  \"@" << profiles[i].getUsername() << "\"" << endl;
    }
    for (int i = 0; i < numUsers; i++) {
        for (int j = 0; j < numUsers; j++) {
            if (following[i][j] == true) {
                cout << "  \"@" << profiles[i].getUsername() << "\" -> \"@" << profiles[j].getUsername() << "\"" << endl;
            }
        }
    }
    cout << "}" << endl;
}

int main() {
    Network nw;
    nw.addUser("mario", "Mario");
    nw.addUser("luigi", "Luigi");
    nw.addUser("yoshi", "Yoshi");

    nw.follow("mario", "luigi");
    nw.follow("mario", "yoshi");
    nw.follow("luigi", "mario");
    nw.follow("luigi", "yoshi");
    nw.follow("yoshi", "mario");
    nw.follow("yoshi", "luigi");

    nw.addUser("wario", "Wario");
    
    for(int i = 2; i < 6; i++) {
        string usrn = "mario" + to_string(i);
        string dspn = "Mario " + to_string(i);
        nw.addUser(usrn, dspn);
        nw.follow(usrn, "mario");
    }
    nw.follow("mario2", "luigi");

    nw.printDot();
}