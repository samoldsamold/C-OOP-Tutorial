/*
    Student ID: CST2309191
    Tutorial 4
    Question 4
*/
#include <iostream>
#include <string>
#include <ctime>
using namespace std;

class HeartRates {
private:
    string firstName;
    string lastName;
    int birthYear;

public:
    // Constructor
    HeartRates(string fName, string lName, int bYear)
        : firstName(fName), lastName(lName), birthYear(bYear) {}

    // Set and get the first name
    void setFirstName(string fName) {
        firstName = fName;
    }
    string getFirstName() const {
        return firstName;
    }

    // Set and get the last name
    void setLastName(string lName) {
        lastName = lName;
    }
    string getLastName() const {
        return lastName;
    }

    // Set and get the birth year
    void setBirthYear(int bYear) {
        birthYear = bYear;
    }
    int getBirthYear() const {
        return birthYear;
    }

    // Calculate the age
    int getAge() const {
        time_t currentTime = time(nullptr);
        struct tm* localTime = localtime(&currentTime);
        int currentYear = localTime->tm_year + 1900;
        return currentYear - birthYear;
    }

    // Calculate the maximum heart rate
    int getMaximumHeartRate() const {
        return 220 - getAge();
    }

    // Calculate the target heart rate range
    void getTargetHeartRate(double& lower, double& upper) const {
        int maxRate = getMaximumHeartRate();
        lower = 0.5 * maxRate;
        upper = 0.85 * maxRate;
    }
};

int main() {
    string fName, lName;
    int bYear;

    cout << "Please enter your first name: ";
    cin >> fName;
    cout << "Please enter your last name: ";
    cin >> lName;
    cout << "Please enter your birth year: ";
    cin >> bYear;

    HeartRates person(fName, lName, bYear);

    cout << "First Name: " << person.getFirstName() << endl;
    cout << "Last Name: " << person.getLastName() << endl;
    cout << "Birth Year: " << person.getBirthYear() << endl;
    cout << "Age: " << person.getAge() << " years" << endl;
    cout << "Maximum Heart Rate: " << person.getMaximumHeartRate() << " beats per minute" << endl;

    double lower, upper;
    person.getTargetHeartRate(lower, upper);
    cout << "Target Heart Rate Range: " << lower << " - " << upper << " beats per minute" << endl;

    return 0;
}    