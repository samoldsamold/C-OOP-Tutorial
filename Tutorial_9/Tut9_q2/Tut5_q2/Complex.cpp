// Complex.cpp
#include <iostream>
#include "Complex.h"

using namespace std;

Complex::Complex() : real(0), imag(0) {}

Complex::Complex(double r, double i) : real(r), imag(i) {}

Complex Complex::add(const Complex& other) const {
    return Complex(real + other.real, imag + other.imag);
}

Complex Complex::subtract(const Complex& other) const {
    return Complex(real - other.real, imag - other.imag);
}

void Complex::print() const {
    cout << "(" << real << ", " << imag << ")" << endl;
}
