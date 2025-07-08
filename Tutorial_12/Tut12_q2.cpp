/*
    Student ID: CST2309191
    Tutorial 12
    Question 2
*/

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


int linearSearch(const vector<int>& data, int target) {
    int comparisons = 0;
    for (int i = 0; i < data.size(); ++i) {
        comparisons++;
        if (data[i] == target) {
            cout << "Linear Search: Value " << target << " found at index " << i << "." << endl;
            return comparisons;
        }
    }
    cout << "Linear Search: Value " << target << " not found." << endl;
    return comparisons;
}

int binarySearch(const vector<int>& data, int target) {
    int comparisons = 0;
    int left = 0;
    int right = data.size() - 1;

    while (left <= right) {
        comparisons++;
        int mid = left + (right - left) / 2;

        // Check if target is present at mid
        if (data[mid] == target) {
            cout << "Binary Search: Value " << target << " found at index " << mid << "." << endl;
            return comparisons;
        }

        // If target greater, ignore left half
        if (data[mid] < target) {
            left = mid + 1;
        }
        // If target is smaller, ignore right half
        else {
            right = mid - 1;
        }
    }

    cout << "Binary Search: Value " << target << " not found." << endl;
    return comparisons;
}

int main() {
    //Initialize an array (vector) of at least 20 integers.
    vector<int> numbers = {10, 5, 23, 42, 18, 9, 31, 7, 3, 15, 29, 33, 49, 2, 11, 25, 38, 4, 19, 21};
    int valueToFind = 38;

    cout << "Original Array: ";
    for(int num : numbers) {
        cout << num << " ";
    }
    cout << "\nValue to find: " << valueToFind << endl;
    cout << "----------------------------------------" << endl;

    //Call the linear search function and get the comparison count.
    int linearComparisons = linearSearch(numbers, valueToFind);
    cout << "Total comparisons made by Linear Search: " << linearComparisons << endl;
    cout << "----------------------------------------" << endl;


    //For binary search, the array MUST be sorted first.
    sort(numbers.begin(), numbers.end());
    cout << "Sorted Array (for Binary Search): ";
    for(int num : numbers) {
        cout << num << " ";
    }
    cout << endl;

    //Call the binary search function and get the comparison count.
    int binaryComparisons = binarySearch(numbers, valueToFind);
    cout << "Total comparisons made by Binary Search: " << binaryComparisons << endl;
    cout << "----------------------------------------" << endl;


    //Display the final comparison values.
    cout << "\n--- Final Results ---" << endl;
    cout << "Linear Search Comparisons: " << linearComparisons << endl;
    cout << "Binary Search Comparisons: " << binaryComparisons << endl;

    return 0;
}
