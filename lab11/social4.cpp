/* 
Name: Hyuncheol Lee
Course: CSCI135
Instructor: Gennadiy Maryash
Assignment: Lab 11d

This program create and store multiple users
*/

#include <cctype>
#include <iostream>
using namespace std;

struct Post {
    string username;
    string message;
};

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
        
        // functions
        bool addUser(string usrn, string dspn);     // attempting to add
        bool follow(string usrn1, string usrn2);    // following
        void printDot();                            // print dot file
        bool writePost(string usrn, string msg);    // write a post
        bool printTimeline(string usrn);            // print the timeline
    private:
        static const int MAX_USERS = 20;            // max number of users
        int numUsers;                               // number of registered users
        Profile profiles[MAX_USERS];                // array of registered users
        int findID(string usrn);                    // will find index of said user
        bool following[MAX_USERS][MAX_USERS];       // friendship matrix ??
        static const int MAX_POSTS = 100;           // maximum number of posts
        int numPosts;                               // number of posts 
        Post posts[MAX_POSTS];                      // array of posts
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
    numPosts = 0;
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

// add something to ur timeline
bool Network::writePost(string usrn, string msg) {
    if (findID(usrn) != -1 && numPosts < MAX_POSTS) {
        posts[numPosts].username = usrn;
        posts[numPosts].message = msg;
        numPosts++;
        return true;
    }
    else {
        return false;
    }
}

// lemme see what u been up to
bool Network::printTimeline(string usrn) {
    int user = findID(usrn);
    if (user != -1) {    
        for (int i = numPosts - 1; i >= 0; i--) {
            Post temp = posts[i];
            int msg = findID(temp.username);
            if (usrn == temp.username) {
                cout << profiles[user].getFullName() << ": " << temp.message << endl;
            } 
            else if (following[user][msg]) {
                cout << profiles[msg].getFullName() << ": " << temp.message << endl;
            }
        }
        return true;
    }
    else {
        return false;
    }
}

int main() {
  Network nw;
  // add three users
  nw.addUser("mario", "Mario");
  nw.addUser("luigi", "Luigi");
  nw.addUser("yoshi", "Yoshi");
   
  nw.follow("mario", "luigi");
  nw.follow("luigi", "mario");
  nw.follow("luigi", "yoshi");
  nw.follow("yoshi", "mario");

  // write some posts
  nw.writePost("mario", "It's a-me, Mario!");
  nw.writePost("luigi", "Hey hey!");
  nw.writePost("mario", "Hi Luigi!");
  nw.writePost("yoshi", "Test 1");
  nw.writePost("yoshi", "Test 2");
  nw.writePost("luigi", "I just hope this crazy plan of yours works!");
  nw.writePost("mario", "My crazy plans always work!");
  nw.writePost("yoshi", "Test 3");
  nw.writePost("yoshi", "Test 4");
  nw.writePost("yoshi", "Test 5");

  cout << endl;
  cout << "======= Mario's timeline =======" << endl;
  nw.printTimeline("mario");
  cout << endl;

  cout << "======= Yoshi's timeline =======" << endl;
  nw.printTimeline("yoshi");
  cout << endl;
}