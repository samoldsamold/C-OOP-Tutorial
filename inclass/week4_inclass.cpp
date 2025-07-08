#include <iostream>
#include <cmath>
using namespace std;

class Circle {
    private:
        double radius;
    public:
        Circle(double r);
        void setRadius(double r);
        double getRadius();
        double calcArea();
};

Circle::Circle(double r) : radius(r) {}

void Circle::setRadius(double r) {
    radius = r;
}

double Circle::getRadius() {
    return radius;
}

double Circle::calcArea() {
    return M_PI * radius * radius;
}

int main() {
    Circle c1(5.0);
    Circle c2(3.5);

    cout << "Area of circle 1: " << c1.calcArea() << endl;
    cout << "Area of circle 2: " << c2.calcArea() << endl;

    return 0;
}