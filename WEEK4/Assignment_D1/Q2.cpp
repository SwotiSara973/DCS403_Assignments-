// Arrays (Basics)
// Q2. Find the Maximum Element in an Array
// Input n elements and find the largest value.

#include <iostream>
using namespace std;

int main() {
    int n;
    int arr[100];

    cout << "Enter number of elements (max 100):\n";
    cin >> n;

    if (n <= 0 || n > 100) {
        cout << "Invalid number of elements";
        return 0;
    }

    cout << "Enter elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int maximum = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > maximum) {
            maximum = arr[i];
        }
    }

    cout << "Maximum element is: " << maximum;
    return 0;
}
