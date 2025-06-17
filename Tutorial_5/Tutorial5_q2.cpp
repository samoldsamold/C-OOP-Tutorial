/*
    Student ID: CST2309173
    Tutorial 5
    Question 2
*/
#include <iostream>
using namespace std;

class Complex {
private:
    double real;
    double imag;

public:
    Complex() : real(0), imag(0) {}

    Complex(double r, double i) : real(r), imag(i) {}
    
    Complex add(const Complex& other) const {
        return Complex(real + other.real, imag + other.imag);
    }

    Complex subtract(const Complex& other) const {
        return Complex(real - other.real, imag - other.imag);
    }

    void print() const {
        cout << "(" << real << ", " << imag << ")" << endl;
    }
};

int main() {
    Complex c1(3.2, 4.5);
    Complex c2(1.1, -2.3);

    Complex c3 = c2.subtract(c1);
    cout << "c2 - c1 = ";
    c3.print();

    Complex c4 = c1.add(c2);
    cout << "c1 + c2 = ";
    c4.print();

    Complex c5 = c1.add(c3);
    cout << "c1 + (c2 - c1) = ";
    c5.print();

    return 0;
}
