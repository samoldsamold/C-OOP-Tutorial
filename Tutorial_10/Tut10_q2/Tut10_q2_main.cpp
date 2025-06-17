/*
    Student ID: CST2309191
    Tutorial 10
    Question 2
*/
#include <iostream>
#include "Date.h"
using namespace std;

int main() {
    int month, day, year;

    cout << "Enter month: ";
    cin >> month;

    cout << "Enter day: ";
    cin >> day;

    cout << "Enter year: ";
    cin >> year;

    try {
        Date date(month, day, year);
        cout << "--- Date Formats ---" << endl;
        date.printDate();
        date.printDateLong();
        date.printDateAlternative();
    } catch (const exception &e) {
        cout << e.what() << endl;
    }

    return 0;
}