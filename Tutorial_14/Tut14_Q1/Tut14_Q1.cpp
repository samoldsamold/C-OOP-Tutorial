/*
    Student ID: CST2309191
    Tutorial 14
    Question 1
*/

include <iostream>
#include <fstream>
#include <limits>
using namespace std;

int main() {
    double sum = 0.0;
    int count = 0;
    int max_num = numeric_limits<int>::min();
    int current_number;

    ifstream inputFile("Numbers1.txt");
    if (!inputFile.is_open()) {
        cerr << "Error: Could not open the file Numbers1.txt" << endl;
        return 1;
    }

    while (inputFile >> current_number) {
        sum += current_number;
        count++;
        if (current_number > max_num) {
            max_num = current_number;
        }
    }

    if (count > 0) {
        double average = sum / count;
        cout << "a. Average of the numbers: " << average << endl;
    } else {
        cout << "a. No numbers found in the file to calculate the average." << endl;
    }

    if (count > 0) {
        cout << "b. Maximum of the number: " << max_num << endl;
    } else {
        cout << "b. No numbers found in the file to determine the maximum." << endl;
    }

    inputFile.close();
    return 0;
}