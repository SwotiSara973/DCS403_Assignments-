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

    // Sort the array first (simple Bubble Sort)
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    int key;
    cout << "Enter element to search:\n";
    cin >> key;

    int low = 0, high = n - 1, position = -1;

    while (low <= high) {
        int mid = (low + high) / 2;
        if (arr[mid] == key) {
            position = mid;
            break;
        } else if (arr[mid] < key) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    if (position != -1)
        cout << "Element found at position: " << position;
    else
        cout << "Element not found";

    return 0;
}
