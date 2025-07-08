#include <iostream>
#include <utility>

// Use the standard namespace
using namespace std;

// Function to print all elements of an integer array
void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void detailedBubbleSort(int arr[], int size) {
    // Outer loop for passes
    for (int i = 0; i < size - 1; i++) {
        // Inner loop for comparisons and swaps
        for (int j = 0; j < size - i - 1; j++) {
            // If the current element is greater than the next, swap them
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
                // Print the current state of the array after the swap
                printArray(arr, size);
            }
        }
    }
}

void modifiedSelectionSort(int arr[], int size) {
    int minIndex;
    // Outer loop to place each element correctly
    for (int i = 0; i < size - 1; i++) {
        // Assume the first element of the unsorted part is the minimum
        minIndex = i;
        // Inner loop to find the actual minimum element
        for (int j = i + 1; j < size; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        // Swap the found minimum element with the current element
        swap(arr[i], arr[minIndex]);
        // Print the array state after one pass is complete
        printArray(arr, size);
    }
}

int main() {
    const int SIZE = 8;
    // Initialize two identical arrays
    int array1[SIZE] = {8, 10, 21, 1, 7, 3, 9, 5};
    int array2[SIZE] = {8, 10, 21, 1, 7, 3, 9, 5};

    // --- Detailed Bubble Sort Demonstration ---
    cout << "Bubble Sort Start (Detailed)" << endl;
    printArray(array1, SIZE); // Display initial contents of the first array

    // Call the function to sort the array
    detailedBubbleSort(array1, SIZE);
    cout << "Bubble Sort End" << endl;

    cout << endl; // Print a blank line for readability

    // --- Selection Sort Demonstration ---
    cout << "Selection Sort Start" << endl;
    printArray(array2, SIZE); // Display initial contents of the second array

    // Call the function to sort the array
    modifiedSelectionSort(array2, SIZE);
    cout << "Selection Sort End" << endl;

    return 0;
}
