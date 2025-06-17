/*
    Student ID: CST2309191
    Tutorial 10
    Question 1
*/

#include <iostream>
#include <exception>
using namespace std;

class NotFound : public exception {
public:
    const char *what() const throw() {
        return "Number not found in array";
    }
};

int linearSearch(const int arr[], int size, int target) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == target) {
            return i;
        }
    }
    throw NotFound();
}

int main() {
    const int numbers[] = {3, 19, 20, 89, 76, 88, 100, 22, 33, 44, 56, 111, 223, 53, 18};
    const int size = sizeof(numbers) / sizeof(numbers[0]);
    int target;

    cout << "Enter number to search: ";
    cin >> target;

    try {
        int index = linearSearch(numbers, size, target);
        cout << "Number found at index: " << index << endl;
    } catch (const NotFound &e) {
        cout << e.what() << endl;
    }

    return 0;
}