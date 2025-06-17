/*
    Student ID: CST2309191
    Tutorial 8
    Question 1
*/

#include <iostream>
using namespace std;

class Complex {
    private:
        double real;
        double imag;
    public:
        Complex(double r = 0.0, double i = 0.0) : real(r), imag(i) {}

        Complex operator+(const Complex& rhs) const {
            return Complex(real + rhs.real, imag + rhs.imag);
            }

        Complex operator-(const Complex& rhs) const {
            return Complex(real - rhs.real, imag - rhs.imag);
        }

        void printComplex() const {
            cout << "(" << real << ", " << imag << ")" << endl;
        }
    };

int main() {
    Complex c1(3.0, 4.0);
    Complex c2(1.0, 2.0);

    cout << "c1 + c2 = ";
    (c1 + c2).printComplex();

    cout << "c1 - c2 = ";
    (c1 - c2).printComplex();

    // Test with default constructor (0, 0)
    Complex c3, c4;
    cout << "c3 + c4 = ";
    (c3 + c4).printComplex();

    return 0;
}