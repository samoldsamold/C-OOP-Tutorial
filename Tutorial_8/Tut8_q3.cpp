/*
    Student ID: CST2309191
    Tutorial 8
    Question 3
*/

#include <iostream>
#include <string>
using namespace std;

class Ship {
private:
    string name;
    int yearBuilt;
public:
    Ship(const string& n, int y) : name(n), yearBuilt(y) {}
    string getName() const { return name; }
    int getYearBuilt() const { return yearBuilt; }
    void setName(const string& n) { name = n; }
    void setYearBuilt(int y) { yearBuilt = y; }
    virtual void print() const {
        cout << "Ship Name: " << name << ", Year Built: " << yearBuilt << endl;
    }
};

class CruiseShip : public Ship {
private:
    int maxPassengers;
public:
    CruiseShip(const string& n, int y, int mp) : Ship(n, y), maxPassengers(mp) {}
    int getMaxPassengers() const { return maxPassengers; }
    void setMaxPassengers(int mp) { maxPassengers = mp; }
    void print() const override {
        cout << "Ship Name: " << getName() << ", Max Passengers: " << maxPassengers << endl;
    }
};

class CargoShip : public Ship {
private:
    int cargoCapacity;
public:
    CargoShip(const string& n, int y, int cc) : Ship(n, y), cargoCapacity(cc) {}
    int getCargoCapacity() const { return cargoCapacity; }
    void setCargoCapacity(int cc) { cargoCapacity = cc; }
    void print() const override {
        cout << "Ship Name: " << getName() << ", Cargo Capacity: " << cargoCapacity << " tons" << endl;
    }
};

int main() {
    CruiseShip cruise("Ocean Voyager", 2000, 2500);
    CargoShip cargo("Heavy Hauler", 2015, 50000);

    Ship* ship1 = &cruise;
    Ship* ship2 = &cargo;

    cout << "CruiseShip Information:" << endl;
    ship1->print();

    cout << "\nCargoShip Information:" << endl;
    ship2->print();

    return 0;
}