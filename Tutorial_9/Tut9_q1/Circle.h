/*
    Student ID: CST2309191
    Tutorial 9
    Question 1
*/
#ifndef CIRCLE_H
#define CIRCLE_H

#include "BasicShape.h"

class Circle : public BasicShape {
private:
    int centerX;
    int centerY;
    double radius;

public:
    Circle(int x, int y, double r) : centerX(x), centerY(y), radius(r) {
        calcArea();
    }

    int getCenterX() const {
        return centerX;
    }

    int getCenterY() const {
        return centerY;
    }

    void calcArea() override {
        area = 3.14159 * radius * radius;
    }
};

#endif
