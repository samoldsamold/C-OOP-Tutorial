#include <iostream>
#include <cmath>
using namespace std;

class RightTriangle {
    private:
        double width;
        double height;
        double area;
        double hypotenuse;
    public:
        RightTriangle(double w, double h);
        void setWidth(double w);
        void setHeight(double h);
        double getWidth();
        double getHeight();
        double calcArea();
        double calcHypotenuse();
        void display();
};

void RightTriangle::setWidth(double w) {
    width = w;
}
void RightTriangle::setHeight(double h) {
    height = h;
}
double RightTriangle::getWidth() {
    return width;
}
double RightTriangle::getHeight() {
    return height;
}
double RightTriangle::calcArea() {
    area = (width * height) / 2;
    return area;
}
double RightTriangle::calcHypotenuse() {
    hypotenuse = sqrt((width * width) + (height * height));
    return hypotenuse;
}
RightTriangle::RightTriangle(double w, double h) : width(w), height(h) {
    area = calcArea();
    hypotenuse = calcHypotenuse();
}
void RightTriangle::display() {
    cout << "Width: " << width << endl;
    cout << "Height: " << height << endl;
    cout << "Area: " << area << endl;
    cout << "Hypotenuse: " << hypotenuse << endl;
}
int main() {
    double width, height;
    cout << "Enter the width of the triangle: ";
    cin >> width;
    cout << "Enter the height of the triangle: ";
    cin >> height;

    RightTriangle triangle(width, height);
    triangle.display();

    return 0;
}