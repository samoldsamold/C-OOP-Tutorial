/*
    Student ID: CST2309191
    Tutorial 5
    Question 3
*/
#include <iostream>

using namespace std;

class Circle {
private:
    double radius;
    double area;
    double diameter;
    double circumference;
    double pi = 3.14159;
    void calcArea() {
        area = pi * radius * radius;
    }

    void calcDiameter() {
        diameter = 2 * radius;
    }

    void calcCircumference() {
        circumference = 2 * pi * radius;
    }

public:
    // Default Constructor
    Circle() : radius(0), area(0), circumference(0), diameter(0) {}

    // Constructor with parameters
    Circle(double r) : radius(r) {
        calcArea();
        calcDiameter();
        calcCircumference();
    }

    void setRadius(double r) {
        radius = r;
        calcArea();
        calcDiameter();
        calcCircumference();
    }

    double getRadius() const {
        return radius;
    }

    double getArea() const {
        return area;
    }

    double getDiameter() const {
        return diameter;
    }

    double getCircumference() const {
        return circumference;
    }
};

int main() {
    Circle c1(3.5);
    cout << "Circle 1: " << endl;
    cout << "Area: " << c1.getArea() << endl;
    cout << "Diameter: " << c1.getDiameter() << endl;
    cout << "Circumference: " << c1.getCircumference() << endl;

    Circle c2;
    c2.setRadius(5.2);
    cout << "\nCircle 2: " << endl;
    cout << "Area: " << c2.getArea() << endl;
    cout << "Diameter: " << c2.getDiameter() << endl;
    cout << "Circumference: " << c2.getCircumference() << endl;

    return 0;
}