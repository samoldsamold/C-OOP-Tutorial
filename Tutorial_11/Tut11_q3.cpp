/*
    Student ID: CST2309191
    Tutorial 11
    Question 3
*/
#include <iostream>

using namespace std;

/**
 * @brief A function template to find the largest element in an array.
 * This function iterates through the array to find and return the maximum value.
 * It can work with any data type that supports the '>' comparison operator.
 */
template <typename T>
T findLargest(const T arr[], int size) {
    // Check for an empty or invalid array.
    // We return a default-constructed value of type T.
    // For numeric types, this will be 0.
    if (size <= 0) {
        return T(); 
    }

    // Assume the first element is the largest initially.
    T largest = arr[0];

    // Loop through the rest of the array to find the actual largest element.
    // We start from the second element (index 1).
    for (int i = 1; i < size; ++i) {
        if (arr[i] > largest) {
            largest = arr[i];
        }
    }

    return largest;
}

int main() {
    cout << "--- Testing the findLargest Template ---" << endl;

    // --- Test with an integer array ---
    const int INT_SIZE = 8;
    int intArr[INT_SIZE] = {10, 55, 3, 18, 99, 42, 7, 81};
    
    // Call the template function with the integer array.
    int largestInt = findLargest(intArr, INT_SIZE);
    cout << "\nThe largest value in the integer array is: " << largestInt << endl;

    // --- Test with a float array ---
    const int FLOAT_SIZE = 6;
    float floatArr[FLOAT_SIZE] = {1.1f, -5.5f, 3.14f, 18.99f, 9.81f, 0.5f};
    
    // Call the template function with the float array.
    float largestFloat = findLargest(floatArr, FLOAT_SIZE);
    cout << "The largest value in the float array is: " << largestFloat << endl;

    return 0;
}
