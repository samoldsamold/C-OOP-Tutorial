/*
    Student ID: CST2309191
    Tutorial 1
    Question 3
*/
#include <iostream>
using namespace std;

// Calculate the tax on the meal cost
double computeTax(double mealCost, double taxRate)
{
    return mealCost * taxRate;
}

// Calculate the tip based on the meal cost plus tax
double computeTip(double mealWithTax, double tipRate)
{
    return mealWithTax * tipRate;
}

int main()
{
    // The initial meal cost
    double meal = 88.67;
    // The tax rate
    double taxRate = 0.0675;
    // The tip rate
    double tipRate = 0.20;

    // Calculate the tax
    double tax = computeTax(meal, taxRate);
    // Add tax to get mealWithTax
    double mealWithTax = meal + tax;
    // Calculate the tip using mealWithTax
    double tip = computeTip(mealWithTax, tipRate);
    // Calculate the total bill
    double totalBill = mealWithTax + tip;

    // Display the results
    cout << "Meal cost: $" << meal << endl;
    cout << "Tax amount: $" << tax << endl;
    cout << "Tip amount: $" << tip << endl;
    cout << "Total bill: $" << totalBill << endl;

    return 0;
}