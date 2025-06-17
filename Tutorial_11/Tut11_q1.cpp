/*
    Student ID: CST2309191
    Tutorial 11
    Question 1
*/
#include <iostream>

using namespace std;

// Define a namespace to encapsulate the math-related functions.
namespace MathUtils {
    /**
     * @brief A function template to calculate the absolute value of a number.
     * * This template can work with any data type that supports comparison (<)
     * and unary negation (-).
     * * @tparam T The data type of the number (e.g., int, double, float).
     * @param value The number whose absolute value is to be found.
     * @return The absolute value of the input number.
     */
    template <typename T>
    T absoluteValue(T value) {
        // If the value is less than 0, return its negation.
        // Otherwise, return the value itself.
        if (value < 0) {
            return -value;
        }
        return value;
    }
}

// Bring the absoluteValue function from the MathUtils namespace into the global scope.
using namespace MathUtils;

int main() {

    int intNum = -10;
    cout << "The absolute value of " << intNum << " is " << absoluteValue(intNum) << endl;

    // Test with a positive integer
    int posIntNum = 25;
    cout << "The absolute value of " << posIntNum << " is " << absoluteValue(posIntNum) << endl;

    // Test with a double
    double doubleNum = -123.45;
    cout << "The absolute value of " << doubleNum << " is " << absoluteValue(doubleNum) << endl;

    // Test with a float
    float floatNum = 5.5f;
    cout << "The absolute value of " << floatNum << " is " << absoluteValue(floatNum) << endl;

    return 0;
}
