/*
    Student ID: CST2309191
    Tutorial 2
    Question 1
*/
#include <iostream>
using namespace std;

int main() {
    double a, b, c, discriminant;
    cout << "Enter coefficients a, b, and c: ";
    cin >> a >> b >> c;
    discriminant = b * b - 4 * a * c;
    if (discriminant > 0) {
        cout << "The equation has two roots." << endl;
    } else if (discriminant == 0) {
        cout << "The equation has one root." << endl;
    } else {
        cout << "The equation has no real roots.1" << endl;
    }
    return 0;
}