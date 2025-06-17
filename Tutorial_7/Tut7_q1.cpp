/*
    Student ID: CST2309191
    Tutorial 7
    Question 1
*/
#include <iostream>
#include <string>
using namespace std;

// Base class: Employee
class Employee {
private:
    string name;
    string employeeNumber;
    string hireDate;
public:
    // Default constructor
    Employee() : name(""), employeeNumber(""), hireDate("") {}

    // Parameterized constructor
    Employee(string n, string num, string date) 
        : name(n), employeeNumber(num), hireDate(date) {}

    // Accessors (getters)
    string getName() const { return name; }
    string getEmployeeNumber() const { return employeeNumber; }
    string getHireDate() const { return hireDate; }

    // Mutators (setters)
    void setName(string n) { name = n; }
    void setEmployeeNumber(string num) { employeeNumber = num; }
    void setHireDate(string date) { hireDate = date; }
};

// Derived class: ProductionWorker
class ProductionWorker : public Employee {
private:
    int shift;          // 1=Day shift, 2=Night shift
    double hourlyPayRate;
public:
    // Default constructor
    ProductionWorker() : Employee(), shift(1), hourlyPayRate(0.0) {}

    // Parameterized constructor
    ProductionWorker(string name, string num, string date, int sh, double rate)
        : Employee(name, num, date), shift(sh), hourlyPayRate(rate) {}

    // Accessors (getters)
    int getShift() const { return shift; }
    double getHourlyPayRate() const { return hourlyPayRate; }

    // Mutators (setters)
    void setShift(int sh) { 
        if (sh == 1 || sh == 2)  // Simple validation
            shift = sh; 
    }
    void setHourlyPayRate(double rate) { hourlyPayRate = rate; }
};

// Main function demonstration
int main() {
    // Create ProductionWorker object
    ProductionWorker worker("Zhang San", "E1001", "2023-01-15", 1, 25.5);

    // Output basic information
    cout << "Employee Name: " << worker.getName() << endl;
    cout << "Employee Number: " << worker.getEmployeeNumber() << endl;
    cout << "Hire Date: " << worker.getHireDate() << endl;
    cout << "Current Shift: " << (worker.getShift() == 1 ? "Day shift" : "Night shift") << endl;
    cout << "Hourly pay rate: $" << worker.getHourlyPayRate() << endl;

    // Modify shift and pay rate
    worker.setShift(2);
    worker.setHourlyPayRate(28.0);

    // Output modified information
    cout << "\nModified Shift: " << (worker.getShift() == 1 ? "Day shift" : "Night shift") << endl;
    cout << "Modified Hourly pay rate: $" << worker.getHourlyPayRate() << endl;

    return 0;
}