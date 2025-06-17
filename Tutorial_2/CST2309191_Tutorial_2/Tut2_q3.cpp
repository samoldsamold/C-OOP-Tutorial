/*
    Student ID: CST2309191
    Tutorial 2
    Question 3
*/
#include <iostream>
using namespace std;

int main() {
    double income;
    cout << "Enter your chargable income: ";
    cin >> income;

    double tax;
    if (income <= 5000) {
        tax = 0;
    } else if (income <= 20000) {
        tax = (income - 5000) * 0.01;
    } else if (income <= 35000) {
        tax = 150 + (income - 20000) * 0.03;
    } else if (income <= 50000) {
        tax = 600 + (income - 35000) * 0.06;
    } else if (income <= 70000) {
        tax = 1500 + (income - 50000) * 0.11;
    } else if (income <= 100000) {
        tax = 3700 + (income - 70000) * 0.19;
    } else if (income <= 400000) {
        tax = 9400 + (income - 100000) * 0.25;
    } else if (income <= 600000) {
        tax = 84400 + (income - 400000) * 0.26;
    } else if (income <= 2000000) {
        tax = 136400 + (income - 600000) * 0.28;
    } else {
        tax = 528400 + (income - 2000000) * 0.3;
    }
    cout << "The total payable tax is $" << tax << endl;
    return 0;
}
