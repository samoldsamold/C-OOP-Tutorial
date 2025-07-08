#include <iostream>
#include <string>

using namespace std;

class Shape {
private:
    string name;
public:
    //getters
    string getName() const {
        return name;
    }
    //setters
    void setName(const string& name) {
        this->name = name;
    }
};

class Rectangle : public Shape {
private:
    double height;
    double width;
public:
    //getters
    double getHeight() const {
        return height;
    }
    double getWidth() const {
        return width;
    }
    //setters
    void setHeight(double height) {
        this->height = height;
    }
    void setWidth(double width) {
        this->width = width;
    }
    double getArea() const {
        return height * width;
    }
};

int main() {
    Rectangle rect;
    rect.setName("Rectangle");
    rect.setHeight(5.0);
    rect.setWidth(10.0);

    cout << "Shape: " << rect.getName() << endl;
    cout << "Height: " << rect.getHeight() << endl;
    cout << "Width: " << rect.getWidth() << endl;
    cout << "Area: " << rect.getArea() << endl;

    return 0;
}