/*
    Student ID: CST2309191
    Tutorial 12
    Question 1
*/

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// Function to perform binary search on a sorted vector
int binarySearch(const vector<long long>& arr, long long target) {
    int left = 0;
    int right = arr.size() - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2; // Avoid potential overflow

        // Check if the target is present at mid
        if (arr[mid] == target) {
            return mid; // Return the index where the target was found
        }

        // If target is greater, ignore the left half
        if (arr[mid] < target) {
            left = mid + 1;
        }
        // If target is smaller, ignore the right half
        else {
            right = mid - 1;
        }
    }

    // Return -1 if the element is not present in the array
    return -1;
}

int main() {
    // Using a vector is more flexible than a C-style array
    vector<long long> numbers = {
        5658845, 4520125, 7895122, 8777541, 8451277, 1302850,
        8080152, 4562555, 5552012, 5050552, 7825877, 1250255,
        1005231, 6545231, 3852085, 7576651, 7881200, 4581002
    };

    // The C++ Standard Library's sort function is highly efficient (typically IntroSort)
    sort(numbers.begin(), numbers.end());

    cout << "Sorted array of numbers:" << endl;
    for (long long num : numbers) {
        cout << num << " ";
    }
    cout << "\n\n";

    long long numberToFind;
    cout << "Enter a number to search for: ";
    cin >> numberToFind;

    int resultIndex = binarySearch(numbers, numberToFind);

    if (resultIndex != -1) {
        cout << "Number " << numberToFind << " found at index " << resultIndex << " (in the sorted array)." << endl;
    } else {
        cout << "Number " << numberToFind << " not found in the array." << endl;
    }

    return 0;
}