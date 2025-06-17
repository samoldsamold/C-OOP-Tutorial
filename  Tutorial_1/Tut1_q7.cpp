/*
    Student ID: CST2309191
    Tutorial 1
    Question 7
*/
#include <iostream>
#include <iomanip>
#include <limits>
using namespace std;

int main()
{
    const int MONTHS = 12;       // Total number of months
    double rainfall[MONTHS];     // Array to store monthly rainfall
    double total = 0.0;          // Annual total rainfall

    // Input monthly rainfall with validation
    for (int i = 0; i < MONTHS; ++i) {
        bool validInput = false;
        
        do {
            cout << "Enter rainfall for month " << (i + 1) << " (must be > 0 mm): ";
            
            // Check if input operation succeeded
            if (cin >> rainfall[i]) {
                if (rainfall[i] > 0) {
                    validInput = true;
                    total += rainfall[i]; // Accumulate total
                } else {
                    cout << "Error: Rainfall must be a positive number. Try again.\n";
                }
            } else {
                // Handle non-numeric input
                cout << "Invalid input! Please enter a numeric value.\n";
                cin.clear(); // Clear error flags
                cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Discard bad input
            }
            
        } while (!validInput);
    }

    // Calculate average rainfall
    double average = total / MONTHS;

    // Display formatted results
    cout << "===== Annual Rainfall Report =====\n"
         << fixed << setprecision(2)
         << "Total annual rainfall: " << total << " mm\n"
         << "Average monthly rainfall: " << average << " mm\n"
         << "==================================";

    return 0;
}