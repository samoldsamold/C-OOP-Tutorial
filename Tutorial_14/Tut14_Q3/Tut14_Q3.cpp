/*
    Student ID: CST2309191
    Tutorial 14
    Question 3
*/
#include <iostream>
#include <fstream>
#include <cmath>
using namespace std;

bool isPrime(int num) {
    if (num <= 1) {
        return false;
    }
    if (num == 2) {
        return true;
    }
    if (num % 2 == 0) {
        return false;
    }
    for (int i = 3; i * i <= num; i += 2) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int current_number;
    int primeCount = 0;

    ifstream inputFile("Numbers2.txt");

    if (!inputFile.is_open()) {
        cerr << "Error: Could not open the file Numbers2.txt" << endl;
        return 1;
    }

    ofstream outputFile("PrimeNumbers.txt");

    if (!outputFile.is_open()) {
        cerr << "Error: Could not open/create the file PrimeNumbers.txt" << endl;
        inputFile.close();
        return 1;
    }

    while (inputFile >> current_number) {
        if (isPrime(current_number)) {
            primeCount++;
            outputFile << current_number << endl;
        }
    }

    cout << "a. Total number of prime numbers in the list: " << primeCount << endl;

    inputFile.close();
    outputFile.close();

    cout << "b. Prime numbers have been written to PrimeNumbers.txt" << endl;

    return 0;
}