// Passing Arrays to Functions
// Q3. Sum of Elements Using a Function
// Write a function that accepts an integer array and returns the sum of its elements.

#include <iostream>
using namespace std;

int sumArray(int arr[], int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }
    return sum;
}

int main() {
    int n;
    cout << "Enter number of elements:\n";
    cin >> n;

    int arr[100];

    cout << "Enter elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int total = sumArray(arr, n);
    cout << "Sum of elements is: " << total;

    return 0;
}
