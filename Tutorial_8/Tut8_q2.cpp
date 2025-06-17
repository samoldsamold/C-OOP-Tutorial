/*
    Student ID: CST2309191
    Tutorial 8
    Question 2
*/

#include <iostream>
using namespace std;

class NumDays {
private:
    double hours;
public:
    NumDays(double h = 0) : hours(h) {}

    double getHours() const { return hours; }
    void setHours(double h) { hours = h; }

    double getDays() const { return hours / 8.0; }
    void setDays(double d) { hours = d * 8.0; }

    NumDays operator+(const NumDays& rhs) const {
        return NumDays(hours + rhs.hours);
    }

    NumDays operator-(const NumDays& rhs) const {
        return NumDays(hours - rhs.hours);
    }

    // Prefix increment
    NumDays& operator++() {
        ++hours;
        return *this;
    }

    // Postfix increment
    NumDays operator++(int) {
        NumDays temp = *this;
        ++hours;
        return temp;
    }

    // Prefix decrement
    NumDays& operator--() {
        --hours;
        return *this;
    }

    // Postfix decrement
    NumDays operator--(int) {
        NumDays temp = *this;
        --hours;
        return temp;
    }
};

int main() {
    NumDays a(8), b(12);
    cout << "a: " << a.getHours() << " hours = " << a.getDays() << " days\n";
    cout << "b: " << b.getHours() << " hours = " << b.getDays() << " days\n";

    NumDays c = a + b;
    cout << "a + b: " << c.getHours() << " hours = " << c.getDays() << " days\n";

    NumDays d = b - a;
    cout << "b - a: " << d.getHours() << " hours = " << d.getDays() << " days\n";

    ++a;
    cout << "++a: " << a.getHours() << " hours = " << a.getDays() << " days\n";

    NumDays aPost = a++;
    cout << "a after postfix increment: " << a.getHours() << " hours = " << a.getDays() << " days\n";
    cout << "aPost (postfix): " << aPost.getHours() << " hours = " << aPost.getDays() << " days\n";

    --b;
    cout << "--b: " << b.getHours() << " hours = " << b.getDays() << " days\n";

    NumDays bPost = b--;
    cout << "b after postfix decrement: " << b.getHours() << " hours = " << b.getDays() << " days\n";
    cout << "bPost (postfix): " << bPost.getHours() << " hours = " << bPost.getDays() << " days\n";

    return 0;
}