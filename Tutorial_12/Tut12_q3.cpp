/*
    Student ID: CST2309191
    Tutorial 12
    Question 3
*/

#include <iostream>
#include <cstdlib> // For rand() and srand()
#include <ctime>   // For time()

using namespace std;

// Function prototypes
int bubbleSort(int arr[], int size);
int selectionSort(int arr[], int size);
void printArray(const int arr[], int size);

int main() {
    // Define the size of the arrays
    const int SIZE = 20;

    // Create two arrays of the specified size
    int array1[SIZE];
    int array2[SIZE];

    // Seed the random number generator so each run generates different numbers
    srand(time(0));

    // Fill the first array with random integers and copy to the second
    for (int i = 0; i < SIZE; ++i) {
        array1[i] = rand() % 100; // Generate random value between 0 and 99
        array2[i] = array1[i];    // Copy the same value to array2
    }

    // Display the original array before any sorting
    cout << "Original Array:" << endl;
    printArray(array1, SIZE);
    cout << "\n----------------------------------------" << endl;

    // Sort the first array using Bubble Sort
    cout << "Sorting with Bubble Sort..." << endl;
    int bubbleExchanges = bubbleSort(array1, SIZE);
    cout << "Bubble Sort finished." << endl;
    cout << "Sorted Array (Bubble Sort):" << endl;
    printArray(array1, SIZE);
    cout << "\nNumber of exchanges made by Bubble Sort: " << bubbleExchanges << endl;
    cout << "\n----------------------------------------" << endl;

    // Sort the second array using Selection Sort
    cout << "Sorting with Selection Sort..." << endl;
    int selectionExchanges = selectionSort(array2, SIZE);
    cout << "Selection Sort finished." << endl;
    cout << "Sorted Array (Selection Sort):" << endl;
    printArray(array2, SIZE);
    cout << "\nNumber of exchanges made by Selection Sort: " << selectionExchanges << endl;
    cout << "\n----------------------------------------" << endl;
    
    // Compare the exchange counts from both sorting methods
    cout << "Comparison of Exchanges:" << endl;
    cout << "Bubble Sort:    " << bubbleExchanges << endl;
    cout << "Selection Sort: " << selectionExchanges << endl;

    return 0;
}

// Bubble Sort function
// Returns the number of exchanges during sorting
int bubbleSort(int arr[], int size) {
    int exchangeCount = 0;
    bool swapped;

    // Perform passes over the array
    for (int i = 0; i < size - 1; ++i) {
        swapped = false;
        // Compare adjacent elements and swap if out of order
        for (int j = 0; j < size - i - 1; ++j) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
                exchangeCount++;
                swapped = true;
            }
        }
        // If no swaps were made, the array is already sorted
        if (!swapped) {
            break;
        }
    }
    return exchangeCount;
}

// Selection Sort function
// Returns the number of exchanges during sorting
int selectionSort(int arr[], int size) {
    int exchangeCount = 0;
    int minIndex;

    // Find the minimum element in each pass
    for (int i = 0; i < size - 1; ++i) {
        minIndex = i;
        for (int j = i + 1; j < size; ++j) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        // Swap the smallest element into the correct position
        if (minIndex != i) {
            swap(arr[minIndex], arr[i]);
            exchangeCount++;
        }
    }
    return exchangeCount;
}

// Print the elements of the array
void printArray(const int arr[], int size) {
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;
}
