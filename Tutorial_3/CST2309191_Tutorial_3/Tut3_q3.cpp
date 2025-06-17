/*
    Student ID: CST2309191
    Tutorial 3
    Question 3
*/
#include <iostream>
#include <vector>
#include <algorithm>  // for std::find
#include <limits>

using namespace std;

int main() {
    vector<int> uniqueNumbers;
    const int maxCount = 20;
    int number;
    int count = 0;

    // Read up to 20 unique non-negative integers
    while (count < maxCount) {
        cout << "Enter number #" << (count + 1) << ": ";

        // Validate input: non-negative integer required
        if (!(cin >> number) || number < 0) {
            cout << "Please enter a non-negative integer." << endl;
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            continue;
        }

        // Check for duplicates
        if (find(uniqueNumbers.begin(), uniqueNumbers.end(), number) != uniqueNumbers.end()) {
            cout << "Duplicate number entered. Please enter a different number." << endl;
            continue;
        }

        // Store the valid, unique number
        uniqueNumbers.push_back(number);
        ++count;
    }

    // Display the unique numbers in the order entered
    cout << "Unique numbers entered:";
    for (int num : uniqueNumbers) {
        cout << " " << num;
    }
    cout << endl;

    return 0;
}