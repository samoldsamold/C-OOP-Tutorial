/*
    Student ID: CST2309191
    Tutorial 2
    Question 2
*/
#include <iostream>
using namespace std;

int main() {
    double hours;
    cout << "Enter total working hours: ";
    cin >> hours;

    double grossPay;
    if (hours <= 40) {
        grossPay = hours * 50;
    } else {
        grossPay = 40 * 50 + (hours - 40) * 75;
    }

    cout << "The total gross pay is $" << grossPay << endl;
    return 0;
}