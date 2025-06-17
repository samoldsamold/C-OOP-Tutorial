/*
    Student ID: CST2309191
    Tutorial 3
    Question 5
*/
#include <iostream>
#include <vector>
using namespace std;

// Function to implement the Sieve of Eratosthenes algorithm
// This function finds all prime numbers up to the given limit
// and returns a vector indicating prime status of each number
vector<int> sieveOfEratosthenes(int limit) {
    // Step a: Create a vector and initialize all elements to 1 (true)
    vector<int> primes(limit + 1, 1);

    // Step b: Use the Sieve of Eratosthenes algorithm
    for (int i = 2; i * i <= limit; ++i) {
        if (primes[i] == 1) {
            for (int j = i * i; j <= limit; j += i) {
                primes[j] = 0;
            }
        }
    }
    return primes;
}

// Function to print prime numbers based on the prime status vector
void printPrimes(const vector<int>& primes, int limit) {
    cout << "Prime numbers between 2 and " << limit << " are: " << endl;
    for (int i = 2; i <= limit; ++i) {
        if (primes[i] == 1) {
            cout << i << " ";
        }
    }
    cout << endl;
}

int main() {
    const int SIZE = 999;
    // Call the sieve function to find primes up to SIZE
    vector<int> primeStatus = sieveOfEratosthenes(SIZE);
    // Call the print function to display the prime numbers
    printPrimes(primeStatus, SIZE);
    return 0;
}  