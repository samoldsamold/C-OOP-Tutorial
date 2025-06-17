// Complex.h
#ifndef COMPLEX_H
#define COMPLEX_H

class Complex {
private:
    double real;
    double imag;

public:
    Complex();
    Complex(double r, double i);
    Complex add(const Complex& other) const;
    Complex subtract(const Complex& other) const;
    void print() const;
};

#endif
