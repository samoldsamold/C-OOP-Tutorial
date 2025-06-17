/*
    Student ID: CST2309191
    Tutorial 6
    Question 1
*/
#include <iostream>
#include <string>
#include <cstdlib> // For srand and rand functions
#include <ctime>   // For time function

using namespace std;

class Coin {
private:
    string sideUp;
public:
    Coin() {
        if (rand() % 2 == 0) {
            sideUp = "Heads";
        } else {
            sideUp = "Tails";
        }
    }

    void toss() {
        if (rand() % 2 == 0) {
            sideUp = "Heads";
        } else {
            sideUp = "Tails";
        }
    }

    string getSideUp() const {
        return sideUp;
    }
};

int main() {
    // Seed the random number generator
    srand(time(0));

    // Create an instance of the Coin class
    Coin coin;

    // Display the initial side facing up
    cout << "Initial side facing up: " << coin.getSideUp() << endl;

    int headsCount = 0;
    int tailsCount = 0;

    // Toss the coin 20 times
    for (int i = 0; i < 20; i++) {
        coin.toss();
        string currentSide = coin.getSideUp();
        cout << "Toss " << (i + 1) << ": " << currentSide << endl;

        if (currentSide == "Heads") {
            headsCount++;
        } else {
            tailsCount++;
        }
    }

    // Display the counts
    cout << "\nNumber of Heads: " << headsCount << endl;
    cout << "Number of Tails: " << tailsCount << endl;

    return 0;
}