#include <iostream>
#include <cctype> 
using namespace std;

string removeLeadingSpaces(string line) {
    bool notSpace;
    string out = "";
    for (int i = 0; i < line.length(); i++) {
        if (!isspace(line[i])) {
            notSpace = true;
        }
        if (notSpace) {
            out += line[i];
        }
    }
    return out;
}

int main() {
    string file;
    while (getline(cin, file)) {
        cout << removeLeadingSpaces(file) << endl;
    }
}