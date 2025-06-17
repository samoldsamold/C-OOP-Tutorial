// Employee.h
#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <string>
using namespace std;

class Employee {
private:
    string name;
    int idNumber;
    string department;
    string position;

public:
    Employee(string empName, int empId, string empDept, string empPos);

    // Setters
    void setName(string empName);
    void setIdNumber(int empId);
    void setDepartment(string empDept);
    void setPosition(string empPos);

    // Getters
    string getName() const;
    int getIdNumber() const;
    string getDepartment() const;
    string getPosition() const;
};

#endif
