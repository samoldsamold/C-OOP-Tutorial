// NumDays.cpp
#include "NumDays.h"

// Constructor
NumDays::NumDays(double h) : hours(h) {}

// Private member function to convert hours to days
double NumDays::convertToDays(double h) const {
    return h / 8.0;
}

// Get hours
double NumDays::getHours() const {
    return hours;
}

// Get days
double NumDays::getDays() const {
    return convertToDays(hours);
}

// Set hours
void NumDays::setHours(double h) {
    hours = h;
}