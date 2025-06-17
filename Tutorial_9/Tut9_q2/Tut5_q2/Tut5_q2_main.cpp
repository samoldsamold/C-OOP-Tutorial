/*
    Student ID: CST2309191
    Tutorial 5
    Question 2
*/
#include <iostream>
#include "Complex.h"

using namespace std;

int main() {
    Complex c1(3.2, 4.5);
    Complex c2(1.1, -2.3);
    Complex c3;

    c3 = c1.add(c2);
    cout << "c1 + c2 = ";
    c3.print();

    c3 = c1.subtract(c2);
    cout << "c1 - c2 = ";
    c3.print();

    cout << "c1 = ";
    c1.print();

    cout << "c2 = ";
    c2.print();

    cout << "c3 = ";
    c3.print();

    return 0;
}
