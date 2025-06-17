#include <iostream>
#include <string>

using namespace std;
class Employee {
    private:
        int employeeID;
        string Nmae;
        string position;
    public:
        Employee(int id, string name, string pos) : employeeID(id), Nmae(name), position(pos) {}
        void display() {
            cout << "Employee ID: " << employeeID << endl;
            cout << "Name: " << Nmae << endl;
            cout << "Position: " << position << endl;
        }
        void setEmployeeID(int id) {
            employeeID = id;
        }
        void setName(string name) {
            Nmae = name;
        }
        void setPosition(string pos) {
            position = pos;
        }
        int getEmployeeID() {
            return employeeID;
        }
        string getName() {
            return Nmae;
        }
        string getPosition() {
            return position;
        }
        void setEmployeeID(int id) {
            employeeID = id;
        }
        void setName(string name) {
            Nmae = name;
        }
        void setPosition(string pos) {
            position = pos;
        }
        int getEmployeeID() {
            return employeeID;
        }
        string getName() {
            return Nmae;
        }
        string getPosition() {
            return position;
        }
        void display() {
            cout << "Employee ID: " << employeeID << endl;
            cout << "Name: " << Nmae << endl;
            cout << "Position: " << position << endl;
        }
}