/*
    Student ID: CST2309191
    Tutorial 1
    Question 6
*/
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    // Initialize item prices array and constants
    double prices[] = {15.95, 24.95, 6.95, 12.95, 3.95};  // Prices of 5 items
    const int ITEM_COUNT = 5;          // Total number of items
    const double TAX_RATE = 0.07;      // 7% sales tax rate

    // Display item price list
    cout << "The price of items:" << endl;
    for (int i = 0; i < ITEM_COUNT; ++i) {
        // Format prices with 2 decimal places
        cout << "Price of item " << (i+1) << " = $" 
             << fixed << setprecision(2) << prices[i] << endl;
    }

    // Calculate order subtotal using range-based for loop
    double subtotal = 0;
    for (double price : prices) {
        subtotal += price;  // Accumulate item prices
    }

    // Calculate sales tax and total amount
    double tax = subtotal * TAX_RATE;
    double total = subtotal + tax;

    // Display formatted receipt
    cout << "----------------------------" << endl;
    cout << "Sale Subtotal: $" << subtotal << endl;
    cout << "Sales Tax Amount (7%): $" << tax << endl;
    cout << "----------------------------" << endl;
    cout << "The Total: $" << total << endl;

    return 0;
}