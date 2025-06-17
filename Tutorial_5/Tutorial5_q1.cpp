/*
    Student ID: CST2309173
    Tutorial 5
    Question 1
*/
#include <iostream>

using namespace std;

class NumDays {
private:
    double hours;
    double convertToDays(double h) const {
        return h / 8.0;
    }

public:
    NumDays(double h) : hours(h) {}

    double getHours() const {
        return hours;
    }

    double getDays() const {
        return convertToDays(hours);
    }

    void setHours(double h) {
        hours = h;
    }
};

int main() {
    NumDays obj1(8);
    NumDays obj2(12);
    NumDays obj3(18);


    cout << "Working Hours: " << obj1.getHours() << endl << "Working Days: " << obj1.getDays() << endl;

    cout << "Woeking Hours: " << obj2.getHours() << endl << "Working Days: " << obj2.getDays() << endl;

    cout << "Working Hours: " << obj3.getHours() << endl << "Working Days: " << obj3.getDays() << endl;

    return 0;
}
    