/*
    Student ID: CST2309191
    Tutorial 1
    Question 8
*/
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    const int ORIGINAL_COOKIES = 48;  // Base recipe quantity
    const double SUGAR_PER_48 = 1.5;  // Sugar for 48 cookies (cups)
    const double BUTTER_PER_48 = 1.0; // Butter for 48 cookies (cups)
    const double FLOUR_PER_48 = 2.75; // Flour for 48 cookies (cups)

    int desiredCookies;
    cout << "Enter number of cookies you want to make: ";
    cin >> desiredCookies;

    // Calculate scaling factor
    double scale = static_cast<double>(desiredCookies) / ORIGINAL_COOKIES;

    // Calculate required ingredients
    double sugarNeeded = SUGAR_PER_48 * scale;
    double butterNeeded = BUTTER_PER_48 * scale;
    double flourNeeded = FLOUR_PER_48 * scale;

    // Format output to 2 decimal places
    cout << fixed << setprecision(2);
    cout << "\nIngredient Requirements for " << desiredCookies << " cookies:\n";
    cout << "--------------------------------\n";
    cout << "Sugar:  " << sugarNeeded << " cups\n";
    cout << "Butter: " << butterNeeded << " cups\n";
    cout << "Flour:  " << flourNeeded << " cups\n";

    return 0;
}