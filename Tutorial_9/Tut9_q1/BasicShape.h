/*
    Student ID: CST2309191
    Tutorial 9
    Question 1
*/
#ifndef BASICSHAPE_H
#define BASICSHAPE_H

class BasicShape {
protected:
    double area;
public:
    double getArea() const {
        return area;
    }
    virtual void calcArea() = 0; // Pure virtual function
};

#endif
