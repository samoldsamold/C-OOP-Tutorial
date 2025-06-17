/*
    Student ID: CST2309191
    Tutorial 10
    Question 3
*/
#include "Date_extended.h"
#include <iostream>
using namespace std;

const string Date::monthNames[12] = {
    "January", "February", "March", "April", "May", "June",
    "July", "August", "September", "October", "November", "December"
};

const char *InvalidMonth::what() const throw() {
    return "Invalid month. Please enter a value between 1 and 12.";
}

const char *InvalidDay::what() const throw() {
    return "Invalid day. Please enter a valid day for the given month.";
}

bool Date::isLeapYear(int year) const {
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

int Date::getDaysInMonth(int month, int year) const {
    if (month == 2) return isLeapYear(year) ? 29 : 28;
    if (month == 4 || month == 6 || month == 9 || month == 11) return 30;
    return 31;
}

Date::Date(int month, int day, int year) {
    setMonth(month);
    setDay(day);
    setYear(year);
}

void Date::setMonth(int month) {
    if (month < 1 || month > 12) {
        throw InvalidMonth();
    }
    this->month = month;
}

void Date::setDay(int day) {
    int maxDays = getDaysInMonth(month, year);
    if (day < 1 || day > maxDays) {
        throw InvalidDay();
    }
    this->day = day;
}

void Date::setYear(int year) {
    this->year = year;
}

void Date::printDate() const {
    cout << month << "/" << day << "/" << year << endl;
}

void Date::printDateLong() const {
    cout << monthNames[month - 1] << " " << day << ", " << year << endl;
}

void Date::printDateAlternative() const {
    cout << day << " " << monthNames[month - 1] << " " << year << endl;
}