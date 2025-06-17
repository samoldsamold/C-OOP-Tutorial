/*
    Student ID: CST2309191
    Tutorial 2
    Question 5
*/
#include <iostream>
using namespace std;

// Output Equal Difference Series
void print_arithmetic_sequence(double start, double difference, int num_terms) {
    cout << "The isomorphic series is：";
    for (int i = 0; i < num_terms; ++i) {
        double term = start + i * difference;
        cout << term;
        if (i != num_terms - 1) {
            cout << ", ";
        }
    }
    cout << endl;
}

int main() {
    double start, difference;
    int num_terms;

    cout << "Please enter the starting value of the isotropic series：";
    cin >> start;
    cout << "Please enter the tolerance of an equal and unequal series：";
    cin >> difference;
    cout << "Enter the total number of terms of the series：";
    cin >> num_terms;

    // Check the total number of items for legality
    if (num_terms <= 0) {
        cout << "Error: the total number of terms must be greater than 0!" << endl;
        return 1;
    }

    print_arithmetic_sequence(start, difference, num_terms);

    return 0;
}