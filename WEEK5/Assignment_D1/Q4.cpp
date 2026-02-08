#include <iostream>
using namespace std;

/*
MEDIUM LEVEL
Q4. Print All Elements of an Array Using Recursion
Problem:
Print each element of an array recursively.
*/

// Recursive function to print array elements
void printArray(int arr[], int size, int index) {
    if (index == size) return;   // Base case: stop when index reaches size
    cout << arr[index] << " ";
    printArray(arr, size, index + 1); // Recursive call
}

int main() {
    int size;
    cout << "Enter number of elements: ";
    cin >> size;

    int arr[size];

    cout << "Enter elements: ";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    cout << "Array elements are: ";
    printArray(arr, size, 0);

    return 0;
}
