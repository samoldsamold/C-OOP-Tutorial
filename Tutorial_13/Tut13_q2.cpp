/*
    Student ID: CST2309191
    Tutorial 13
    Question 2
*/

#include <iostream>
#include <iomanip> 
using namespace std;

// Define a constant for Pi for better readability and precision
const double PI = 3.14159;


class BasicShape {
protected:
    // The area is 'protected' so it can be directly accessed and modified by derived classes.
    float area;

public:

    BasicShape() : area(0.0f) {}


    float getArea() const {
        return area;
    }


    virtual void calcArea() = 0;


    virtual ~BasicShape() {}
};

class Circle : public BasicShape {
private:
    int centerX;
    int centerY;
    double radius;

public:
    Circle(int x, int y, double r) : centerX(x), centerY(y), radius(r) {
        // As required, the constructor calls calcArea to initialize the area.
        calcArea();
    }

    // Getter for the x-coordinate of the center
    int getCenterX() const {
        return centerX;
    }

    // Getter for the y-coordinate of the center
    int getCenterY() const {
        return centerY;
    }


    void calcArea() override {
        area = static_cast<float>(PI * radius * radius);
    }
};


class Rectangle : public BasicShape {
private:
    int width;
    int length;

public:
    Rectangle(int w, int l) : width(w), length(l) {
        // As required, the constructor calls calcArea to initialize the area.
        calcArea();
    }

    // Getter for the width
    int getWidth() const {
        return width;
    }

    // Getter for the length
    int getLength() const {
        return length;
    }

    void calcArea() override {
        area = static_cast<float>(length * width);
    }
};

// --- Main Program to Test the Classes ---
int main() {
    // Create an object for each derived class.
    Circle circle(0, 0, 10.0);       // A circle with center (0,0) and radius 10
    Rectangle rectangle(20, 10);   // A rectangle with width 20 and length 10

    // Create a pointer to the base class.
    BasicShape* shapePtr;

    // --- Demonstrate Polymorphism ---

    // 1. Point to the Circle object and display its area.
    shapePtr = &circle;
    cout << "Using BasicShape pointer for Circle..." << endl;
    // The getArea() function is called on the object shapePtr points to.
    // The area was already calculated by the Circle's constructor.
    cout << "Area of the Circle: " << fixed << setprecision(2) << shapePtr->getArea() << endl;
    cout << endl;

    // 2. Point to the Rectangle object and display its area.
    shapePtr = &rectangle;
    cout << "Using BasicShape pointer for Rectangle..." << endl;
    // The same base class pointer now calls the same function but gets the Rectangle's area.
    // The area was already calculated by the Rectangle's constructor.
    cout << "Area of the Rectangle: " << fixed << setprecision(2) << shapePtr->getArea() << endl;

    return 0;
}