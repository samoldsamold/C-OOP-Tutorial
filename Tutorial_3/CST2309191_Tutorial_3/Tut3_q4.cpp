/*
    Student ID: CST2309191
    Tutorial 3
    Question 4
*/
#include <iostream>
#include <vector>
#include <random>
#include <iomanip>

using namespace std;

int main() {
    const int numRolls = 36000;
    const int minSum = 2;
    const int maxSum = 12;

    // Vector to tally counts for sums 2 through 12
    vector<int> tally(maxSum + 1, 0);

    // Random number generation setup
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<> dieDist(1, 6);

    // Roll the dice numRolls times
    for (int i = 0; i < numRolls; ++i) {
        int die1 = dieDist(gen);
        int die2 = dieDist(gen);
        int sum = die1 + die2;
        ++tally[sum];
    }

    // Display results
    cout << "Roll Sum" << setw(15) << "Count" << setw(15) << "Percentage" << endl;
    for (int sum = minSum; sum <= maxSum; ++sum) {
        double percentage = static_cast<double>(tally[sum]) / numRolls * 100;
        cout << setw(4) << sum
             << setw(15) << tally[sum]
             << setw(14) << fixed << setprecision(2) << percentage << "%"
             << endl;
    }

    // Check reasonableness for sum = 7
    double expectedRatio = 6.0 / 36.0;  // Probability of rolling 7
    double actualRatio = static_cast<double>(tally[7]) / numRolls;
    cout << endl
         << "Expected percentage for sum 7: " << fixed << setprecision(2)
         << (expectedRatio * 100) << "%" << endl;
    cout << "Actual percentage for sum 7:   " << fixed << setprecision(2)
         << (actualRatio * 100) << "%" << endl;

    return 0;
}
