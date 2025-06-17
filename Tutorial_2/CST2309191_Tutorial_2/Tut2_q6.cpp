/*
    Student ID: CST2309191
    Tutorial 2
    Question 6
*/
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {
    double pi = 0.0;
    int denominator = 1;
    int sign = 1;
    int terms = 0;

    while (true) {
        // Calculate the current item and add it to pi
        pi += sign * (4.0 / denominator);
        terms++;
        
        // Round to three decimal places
        double rounded_pi = std::round(pi * 1000) / 1000;
        
        // Check that 3.141 is reached
        if (rounded_pi == 3.141) {
            break;
        }
        
        // Update symbols and denominators
        sign *= -1;
        denominator += 2;
    }

    cout << "It takes " << terms << " terms to get 3.141" << endl;
    cout << "Precision value: " << fixed << setprecision(10) << pi << endl;
    return 0;
}