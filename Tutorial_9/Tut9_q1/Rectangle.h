/*
    Student ID: CST2309191
    Tutorial 9
    Question 1
*/
#ifndef RECTANGLE_H
#define RECTANGLE_H

#include "BasicShape.h"

class Rectangle : public BasicShape {
private:
    int width;
    int length;

public:
    Rectangle(int w, int l) : width(w), length(l) {
        calcArea();
    }

    int getWidth() const {
        return width;
    }

    int getLength() const {
        return length;
    }

    void calcArea() override {
        area = width * length;
    }
};

#endif