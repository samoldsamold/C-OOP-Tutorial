/*
    Student ID: CST2309191
    Tutorial 7
    Question 2
*/
#include <iostream>
#include <string>
using namespace std;

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

    class ShiftSupervisor : public Employee {
        private:
            double annualSalary;
            double annualProductionBonus;
        public:
            // Default constructor
            ShiftSupervisor() : Employee(), annualSalary(0.0), annualProductionBonus(0.0) {}
    
            // Parameterized constructor
            ShiftSupervisor(string name, string num, string date, double salary, double bonus)
                : Employee(name, num, date), annualSalary(salary), annualProductionBonus(bonus) {}
    
            // Accessors (getters)
            double getAnnualSalary() const { return annualSalary; }
            double getAnnualProductionBonus() const { return annualProductionBonus; }
    
            // Mutators (setters)
            void setAnnualSalary(double salary) { annualSalary = salary; }
            void setAnnualProductionBonus(double bonus) { annualProductionBonus = bonus; }
    };

int main() {
    // Create an instance of ShiftSupervisor
    ShiftSupervisor supervisor("John Doe", "12345", "2023-01-01", 60000.0, 5000.0);
    
    // Display the information
    cout << "Name: " << supervisor.getName() << endl;
    cout << "Employee Number: " << supervisor.getEmployeeNumber() << endl;
    cout << "Hire Date: " << supervisor.getHireDate() << endl;
    cout << "Annual Salary: $" << supervisor.getAnnualSalary() << endl;
    cout << "Annual Production Bonus: $" << supervisor.getAnnualProductionBonus() << endl;

    return 0;   
}