/*
    Student ID: CST2309191
    Tutorial 11
    Question 2
*/
#include <iostream>
#include <string>

using namespace std;

/**
 * @brief A function template to swap the values of two variables.
 * * This function takes two arguments by reference and swaps their values.
 * A temporary variable is used to hold one of the values during the swap.
 * Because it's a template, it can work with any data type that supports
 * assignment (e.g., int, double, char, std::string).
 * * @tparam T The data type of the variables to be swapped.
 * @param a A reference to the first variable.
 * @param b A reference to the second variable.
 */
template <typename T>
void SwapNumber(T &a, T &b) {
    // A temporary variable to hold the value of 'a'
    T temp = a;
    // Assign the value of 'b' to 'a'
    a = b;
    // Assign the original value of 'a' (stored in 'temp') to 'b'
    b = temp;
}

int main() {
    cout << "--- Testing the SwapNumber Template ---" << endl;

    // Test with integers
    int x = 100, y = 200;
    cout << "\nOriginal integers: x = " << x << ", y = " << y << endl;
    SwapNumber(x, y);
    cout << "Swapped integers:  x = " << x << ", y = " << y << endl;

    // Test with floating-point numbers
    double d1 = 1.23, d2 = 4.56;
    cout << "\nOriginal doubles: d1 = " << d1 << ", d2 = " << d2 << endl;
    SwapNumber(d1, d2);
    cout << "Swapped doubles:  d1 = " << d1 << ", d2 = " << d2 << endl;

    // Test with strings
    string s1 = "Hello", s2 = "World";
    cout << "\nOriginal strings: s1 = \"" << s1 << "\", s2 = \"" << s2 << "\"" << endl;
    SwapNumber(s1, s2);
    cout << "Swapped strings:  s1 = \"" << s1 << "\", s2 = \"" << s2 << "\"" << endl;

    return 0;
}
