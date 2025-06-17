/*
    Student ID: CST2309191
    Tutorial 3
    Question 2
*/
#include <iostream>
#include <vector>
#include <algorithm>
#include <limits>

using namespace std;

int main() {
    // Initialize the list of valid account numbers
    vector<int> validAccounts = {
        5658845, 4520125, 7895122, 8777541, 8451277, 1302850,
        8080152, 4562555, 5552012, 5050552, 7825877, 1250255,
        1005231, 6545231, 3852085, 7576651, 7881200, 4581002
    };

    // Sort the vector for binary search
    sort(validAccounts.begin(), validAccounts.end());

    int account;
    cout << "Enter your account number: ";
    // Validate input: non-negative integer required
    while (!(cin >> account) || account < 0) {
        cout << "Please enter a non-negative integer: ";
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    // Use binary_search to check if the number exists
    bool isValid = binary_search(validAccounts.begin(), validAccounts.end(), account);

    if (isValid) {
        cout << "The account number is valid." << endl;
    } else {
        cout << "The account number is invalid." << endl;
    }

    return 0;
}
