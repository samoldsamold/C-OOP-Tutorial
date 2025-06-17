/*
    Student ID: CST2309191
    Tutorial 10
    Question 2
*/
#ifndef DATE_H
#define DATE_H

#include <string>
#include <exception>

class InvalidMonth : public std::exception {
public:
    const char *what() const throw();
};

class InvalidDay : public std::exception {
public:
    const char *what() const throw();
};

class Date {
private:
    int month, day, year;
    static const std::string monthNames[12];
    int getDaysInMonth(int month) const;

public:
    Date(int month, int day, int year);
    void setMonth(int month);
    void setDay(int day);
    void setYear(int year);
    void printDate() const;
    void printDateLong() const;
    void printDateAlternative() const;
};

#endif