/*
    Student ID: CST2309191
    Tutorial 4
    Question 1
*/
#include <iostream>
#include <string>
using namespace std;

// Define the Employee class
class Employee {
private:
    string name;
    int idNumber;
    string department;
    string position;

public:
    // Constructor
    Employee(string empName, int empId, string empDept, string empPos) {
        name = empName;
        idNumber = empId;
        department = empDept;
        position = empPos;
    }

    // Mutator (setter) functions
    void setName(string empName) {
        name = empName;
    }
    void setIdNumber(int empId) {
        idNumber = empId;
    }
    void setDepartment(string empDept) {
        department = empDept;
    }
    void setPosition(string empPos) {
        position = empPos;
    }

    // Accessor (getter) functions
    string getName() const {
        return name;
    }
    int getIdNumber() const {
        return idNumber;
    }
    string getDepartment() const {
        return department;
    }
    string getPosition() const {
        return position;
    }
};

int main() {
    // Create three Employee objects
    Employee emp1("Susan Meyers", 47899, "Accounting", "Vice President");
    Employee emp2("Mark Jones", 39119, "IT", "Programmer");
    Employee emp3("Joy Rogers", 81774, "Manufacturing", "Engineer");

    // Display data for each employee
    cout << "Employee 1:" << endl;
    cout << "Name: " << emp1.getName() << endl;
    cout << "ID Number: " << emp1.getIdNumber() << endl;
    cout << "Department: " << emp1.getDepartment() << endl;
    cout << "Position: " << emp1.getPosition() << endl << endl;

    cout << "Employee 2:" << endl;
    cout << "Name: " << emp2.getName() << endl;
    cout << "ID Number: " << emp2.getIdNumber() << endl;
    cout << "Department: " << emp2.getDepartment() << endl;
    cout << "Position: " << emp2.getPosition() << endl << endl;

    cout << "Employee 3:" << endl;
    cout << "Name: " << emp3.getName() << endl;
    cout << "ID Number: " << emp3.getIdNumber() << endl;
    cout << "Department: " << emp3.getDepartment() << endl;
    cout << "Position: " << emp3.getPosition() << endl;

    return 0;
}