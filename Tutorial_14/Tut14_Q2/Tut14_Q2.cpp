/*
    Student ID: CST2309191
    Tutorial 14
    Question 2
*/

#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;

int main() {
    vector<string> names;
    string name;

    ifstream inputFile("Names.txt");
    if (!inputFile.is_open()) {
        cerr << "Error: Could not open the file Names.txt" << endl;
        return 1;
    }

    while (getline(inputFile, name)) {
        names.push_back(name);
    }

    cout << "a. Total number of names in the list: " << names.size() << endl;

    bool foundJasmine = false;
    for (int i = 0; i < names.size(); ++i) {
        if (names[i] == "Jasmine") {
            cout << "b. \"Jasmine\" found at index position: " << i << endl;
            foundJasmine = true;
        }
    }

    if (!foundJasmine) {
        cout << "b. \"Jasmine\" does not appear in the name list." << endl;
    }

    inputFile.close();

    return 0;
}