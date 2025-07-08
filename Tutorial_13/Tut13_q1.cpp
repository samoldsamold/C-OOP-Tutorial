/*
    Student ID: CST2309191
    Tutorial 13
    Question 1
*/

#include <iostream>

using namespace std;


// Swaps the values: first <- second, second <- third, third <- first
void SwapData(int* ptr1, int* ptr2, int* ptr3) {
    // Use a temporary variable to hold the original value of the first number.
    // This prevents data loss during the swap.
    int temp = *ptr1;

    // The value of the second number is assigned to the first.
    *ptr1 = *ptr2;

    // The value of the third number is assigned to the second.
    *ptr2 = *ptr3;

    // The original value of the first number (stored in temp) is assigned to the third.
    *ptr3 = temp;
}

// The main function to test the SwapData functionality
int main() {
    int num1, num2, num3;

    // Prompt user for inputs
    cout << "Enter three integers: ";
    cin >> num1 >> num2 >> num3;

    // 2. Display the initial values of the variables
    cout << "Before swapping:" << endl;
    cout << "Number 1: " << num1 << endl;
    cout << "Number 2: " << num2 << endl;
    cout << "Number 3: " << num3 << endl;
    cout << endl; // For formatting

    // 3. Call the SwapData function, passing the memory addresses of the variables
    SwapData(&num1, &num2, &num3);

    // 4. Display the values after the swap has occurred
    cout << "After swapping:" << endl;
    cout << "Number 1: " << num1 << endl;
    cout << "Number 2: " << num2 << endl;
    cout << "Number 3: " << num3 << endl;

    return 0; // Indicate successful execution
}