/* 
Name: Hyuncheol Lee
Course: CSCI135
Instructor: Gennadiy Maryash
Assignment: Project 2a

This program will format a text file to the user's wishes
*/

#include <iostream>
#include <fstream>
#include <sstream>
using namespace std;

string lineSplit(string line, int width) {
    string sentence = "";
    int sentenceLength = 0;
    istringstream iss(line);
    string word;
    bool first = true;
    int tempLength;

    while(iss >> word) {
        int currentWordLength = word.length() + 1;
        
        if (first) {
            sentence += word;
            sentenceLength += currentWordLength;
            first = false;
        }

        else if (sentenceLength + currentWordLength < width + 1) {
            sentence += " " + word;
            sentenceLength += currentWordLength;
        }

        else {
            sentence += "\n" + word;
            sentenceLength = currentWordLength;
        }
    }

    return sentence;
}

string resultOutput(ifstream &infile, int count) {
    string result = "";
    string line;
    bool first = true;
    bool print, lineBreak;
    string paragraph = "";

    while(getline(infile, line)) {
        paragraph += " " + line;

        if (line.length() <= count) {
            print = true;
            result += lineSplit(paragraph, count);

            if (line == "" && result[result.length() - 1] != '\n') {
                result += "\n";
            }

            if (isspace(line[0])) {
                result += "\n";
            }

            result += "\n";
            paragraph = "";

        } 
        
        else {
            print = false;
        }

    }

    if (!print) {
        result += lineSplit(paragraph, count);
    }

    if (result[result.length() - 1] == '\n'){
        return result.substr(0, result.length() - 1);
    }

    return result;
}

string removeColon(string input) {
    string revised = "";
    for (int i = 0; i < input.length(); i++) {
        if (input[i] != ';') {
            revised += input[i];
        }
    }
    return revised;
}

int main() {
    string inputName;
    cout << "Enter the input filename: ";
    cin >> inputName;

    ifstream infile;
    infile.open(inputName);

    string first;
    getline(infile, first);
    int index = first.find(';');
    int count = stoi(first.substr(0, index));
    string outputFile = first.substr(index + 1, first.length() - index - 2);

    string output = resultOutput(infile, count);
    infile.close();

    ofstream outfile;
    outfile.open(removeColon(outputFile));
    outfile << output;
    outfile.close();
}