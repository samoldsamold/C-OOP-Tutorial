/*
    Student ID: CST2309191
    Tutorial 9
    Question 1
*/
#include <iostream>
#include "Circle.h"
#include "Rectangle.h"

using namespace std;

int main() {
    Circle myCircle(10, 15, 5.0);
    cout << "Circle:" << endl;
    cout << "Center X: " << myCircle.getCenterX() << endl;
    cout << "Center Y: " << myCircle.getCenterY() << endl;
    cout << "Area: " << myCircle.getArea() << endl;

    Rectangle myRectangle(4, 6);
    cout << "\nRectangle:" << endl;
    cout << "Width: " << myRectangle.getWidth() << endl;
    cout << "Length: " << myRectangle.getLength() << endl;
    cout << "Area: " << myRectangle.getArea() << endl;

    return 0;
}
