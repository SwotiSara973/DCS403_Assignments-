// Array Searching Algorithms
// Q4. Linear Search
// Search for a number in an array using linear search.

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number of elements:\n";
    cin >> n;

    int arr[100];
    cout << "Enter elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int key;
    cout << "Enter element to search:\n";
    cin >> key;

    int position = -1;
    for (int i = 0; i < n; i++) {
        if (arr[i] == key) {
            position = i;
            break;
        }
    }

    if (position != -1)
        cout << "Element found at position: " << position;
    else
        cout << "Element not found";

    return 0;
}
