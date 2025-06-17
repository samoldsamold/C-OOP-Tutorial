/*
    Student ID: CST2309191
    Tutorial 5
    Question 1
*/
#include <iostream>
#include "NumDays.h"

using namespace std;

int main() {
    // Create three objects
    NumDays obj1(8);
    NumDays obj2(12);
    NumDays obj3(18);

    // Display the information for each object
    cout << "Object 1:" << endl;
    cout << "Hours: " << obj1.getHours() << ", Days: " << obj1.getDays() << endl;

    cout << "Object 2:" << endl;
    cout << "Hours: " << obj2.getHours() << ", Days: " << obj2.getDays() << endl;

    cout << "Object 3:" << endl;
    cout << "Hours: " << obj3.getHours() << ", Days: " << obj3.getDays() << endl;

    return 0;
}
