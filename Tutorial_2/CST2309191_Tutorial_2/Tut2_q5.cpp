/*
    Student ID: CST2309191
    Tutorial 2
    Question 5
*/
#include <iostream>
using namespace std;

int main() {
    int sum = 0;

    // Traverse directly through multiples of 7
    for (int i = 7; i <= 100; i += 7) {
        sum += i;
    }

    cout << "The sum of all multiples of 7 between 1 and 100 is: " << sum << endl;
    
    return 0;
}