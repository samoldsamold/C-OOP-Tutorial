/*
    Student ID: CST2309191
    Tutorial 1
    Question 9
*/
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    const double ASSESSMENT_RATE = 0.60;  // 60% assessment rate
    const double TAX_PER_100 = 0.75;      // $0.75 tax per $100 of assessed value

    double actualValue;
    // Validate input: actual value must be ≥ $0
    do {
        cout << "Value must be ≥ $0. Enter actual value: ";
        cin >> actualValue;
    } while (actualValue < 0);

    // Calculate assessment value (60% of actual value)
    double assessedValue = actualValue * ASSESSMENT_RATE;

    // Calculate property tax (assessed value / 100 * tax rate)
    double propertyTax = (assessedValue / 100) * TAX_PER_100;

    // Format output to 2 decimal places
    cout << fixed << setprecision(2);
    cout << "\n=== Property Tax Calculation ===" << endl;
    cout << "Actual value:    $" << actualValue << endl;
    cout << "Assessed value:  $" << assessedValue << " (60% of actual value)" << endl;
    cout << "Property tax:    $" << propertyTax << endl;
    cout << "=================================" << endl;

    return 0;
}