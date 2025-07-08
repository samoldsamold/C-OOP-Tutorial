#include <iostream>
#include <string>
using namespace std;

class Point {
private:
    int coord_x;
    int coord_y;
public:
    // Default constructor
    Point() : coord_x(0), coord_y(0) {}

    // x-Parameterized constructor
    Point(int x) : coord_x(x), coord_y(0) {}

    // Accessors (getters)
    int getX() const { return coord_x; }
    int getY() const { return coord_y; }

    // Mutators (setters)
    void setX(int x) { coord_x = x; }
    void setY(int y) { coord_y = y; }
};

int main() {
    // Create a Point object using the default constructor
    Point p1;
    cout << "Point 1: (" << p1.getX() << ", " << p1.getY() << ")" << endl;

    // Create a Point object using the parameterized constructor
    Point p2(5);
    cout << "Point 2: (" << p2.getX() << ", " << p2.getY() << ")" << endl;

    // Modify the coordinates of the first point
    p1.setX(3);
    p1.setY(4);
    cout << "Modified Point 1: (" << p1.getX() << ", " << p1.getY() << ")" << endl;

    return 0;
}