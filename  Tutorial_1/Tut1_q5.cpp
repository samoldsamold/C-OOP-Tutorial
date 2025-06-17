/*
    Student ID: CST2309191
    Tutorial 1
    Question 5
*/
#include <iostream>
using namespace std;

// Swap two integers using reference parameters
void swapNumbers(int& a, int& b)
{
    int temp = a;
    a = b;
    b = temp;
}

int main()
{
    int x, y;
    // Display program header
    cout << "Swap two numbers:" << endl
         << "-------------------" << endl;

    // Get user input for first number
    cout << "Input 1st number: ";
    cin >> x;
    
    // Get user input for second number 
    cout << "Input 2nd number: ";
    cin >> y;
    
    // Perform swap operation
    swapNumbers(x, y);
    
    // Display results after swapping
    cout << "After swapping:" << endl
         << "The 1st number is: " << x << endl
         << "The 2nd number is: " << y << endl;

    return 0;
}