/*
    Student ID: CST2309191
    Tutorial 3
    Question 1
*/
#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
#include <iomanip>
#include <limits>

using namespace std;

int main() {
    int numScores;
    cout << "Enter the number of test scores: ";
    // Validate input: must be a positive integer
    while (!(cin >> numScores) || numScores <= 0) {
        cout << "Please enter a positive number: ";
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    // Use an automatically managed vector
    vector<double> scores;
    scores.reserve(numScores);

    // Input and validate each score
    for (int i = 0; i < numScores; ++i) {
        double score;
        cout << "Enter score #" << (i + 1) << ": ";
        while (!(cin >> score) || score < 0) {
            cout << "Please enter a non-negative score: ";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }
        scores.push_back(score);
    }

    // Sort in descending order
    sort(scores.begin(), scores.end(), greater<double>());

    // Calculate the average score
    double total = accumulate(scores.begin(), scores.end(), 0.0);
    double average = total / scores.size();

    // Output sorted scores
    cout << "\nSorted Scores (Descending):\n";
    for (double s : scores) {
        cout << s << " ";
    }

    // Output average score with two decimal places
    cout << "\n\nAverage Score: "
         << fixed << setprecision(2) << average
         << endl;

    return 0;
}
