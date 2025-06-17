#include "Employee.h"

// Constructor
Employee::Employee(string empName, int empId, string empDept, string empPos) {
    name = empName;
    idNumber = empId;
    department = empDept;
    position = empPos;
}

// Setters
void Employee::setName(string empName) {
    name = empName;
}

void Employee::setIdNumber(int empId) {
    idNumber = empId;
}

void Employee::setDepartment(string empDept) {
    department = empDept;
}

void Employee::setPosition(string empPos) {
    position = empPos;
}

// Getters
string Employee::getName() const {
    return name;
}

int Employee::getIdNumber() const {
    return idNumber;
}

string Employee::getDepartment() const {
    return department;
}

string Employee::getPosition() const {
    return position;
}
