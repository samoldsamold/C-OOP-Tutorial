/*
    Student ID: CST2309191
    Tutorial 1
    Question 2
*/
#include <iostream>
using namespace std;

// Calculate the state tax amount for a given purchase
double computeStateTax(double purchase, double stateRate)
{
    return purchase * stateRate;
}

// Calculate the county tax amount for a given purchase
double computeCountyTax(double purchase, double countyRate)
{
    return purchase * countyRate;
}

int main()
{
    // Total amount of purchase
    double purchase = 95.0;

    // State and county tax rates
    double stateTaxRate = 0.04;
    double countyTaxRate = 0.02;
    
    // Calculate total tax by adding state and county taxes
    double totalTax = computeStateTax(purchase, stateTaxRate)
                    + computeCountyTax(purchase, countyTaxRate);
    
    // Output the total sales tax to the screen
    cout << "The total sales tax is: $" << totalTax << endl;
    return 0;
}