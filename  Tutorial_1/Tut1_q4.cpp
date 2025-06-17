/*
    Student ID: CST2309191
    Tutorial 1
    Question 4
*/
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    // Initialize variables with payment details
    double payAmount = 2200.0;    // Weekly pay amount in USD
    int payPeriods = 26;          // Number of pay periods per year
    double annualPay;             // Stores calculated annual gross pay

    // Calculate annual gross pay
    annualPay = payAmount * payPeriods;

    // Configure currency formatting and display result
    cout << "The total annual pay: $"
         << fixed                  // Force fixed-point notation
         << setprecision(2)        // Display 2 decimal places
         << annualPay << endl;

    return 0;
}