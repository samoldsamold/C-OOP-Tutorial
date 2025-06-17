/*
    Student ID: CST2309191
    Tutorial 6
    Question 2
*/
#include <iostream>
using namespace std;

class RoomDimension {
private:
    double length;
    double width;
public:
    RoomDimension(double len, double wid) : length(len), width(wid) {}
    double getArea() const {
        return length * width;
    }
};

class RoomCarpet {
private:
    RoomDimension dimension;
    double costPerSqFt;
public:
    RoomCarpet(const RoomDimension& dim, double cost) 
        : dimension(dim), costPerSqFt(cost) {}
    double getTotalCost() const {
        return dimension.getArea() * costPerSqFt;
    }
};

int main() {
    double length, width, cost;

    cout << "Enter length of room: ";
    cin >> length;
    cout << "Enter width of room: ";
    cin >> width;
    cout << "Enter cost per squre feet: ";
    cin >> cost;

    RoomDimension roomDim(length, width);
    RoomCarpet roomCarpet(roomDim, cost);
    double totalCost = roomCarpet.getTotalCost();

    cout << "The total cost of carpet: " << totalCost << endl;

    return 0;
}