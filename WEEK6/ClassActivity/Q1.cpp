#include <iostream>
using namespace std;

/*
    Function to perform Selection Sort on an array
    arr[] : the array to be sorted
    n     : number of elements in the array
*/
void selectionSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int minIndex = i;

        // Find the index of the minimum element in the remaining unsorted part
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }

        // Swap the found minimum element with the first element of unsorted part
        if (minIndex != i) {
            int temp = arr[i];
            arr[i] = arr[minIndex];
            arr[minIndex] = temp;
        }

        // Print array after each pass
        cout << "Pass " << i + 1 << ": ";
        for (int k = 0; k < n; k++) {
            cout << arr[k] << " ";
        }
        cout << endl;
    }
}

// Function to print the array
void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr[] = {25, 43, 11, 47, 10, 21, 52, 34, 18};
    int n = sizeof(arr)/sizeof(arr[0]);

    cout << "Initial Array: ";
    printArray(arr, n);
    cout << endl;

    selectionSort(arr, n);

    cout << "\nSorted Array: ";
    printArray(arr, n);

    return 0;
}
