#include <iostream>
#include <string>

using namespace std;

class Employee {
private:
    string name;
    int id;
public:
    Employee(const string& n, int i) : name(n), id(i) {}
    
    string getName() const { return name; }
    int getId() const { return id; }
    
    void setName(const string& n) { name = n; }
    void setId(int i) { id = i; }
    
    virtual void print() const {
        cout << "Employee Name: " << name << ", ID: " << id << endl;
    }

    virtual ~Employee() = default; // Virtual destructor for proper cleanup

    double calculatePay() const {
        return 0.0; // Base class does not implement pay calculation
    }
};

class 