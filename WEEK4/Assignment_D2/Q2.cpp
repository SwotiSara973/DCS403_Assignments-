// Arrays (2D)
// Q2. Sum of All Elements in a 2x3 Array
// Calculate and print the sum of all elements in a 2x3 array.

#include <iostream>
using namespace std;

int main() {
    int arr[2][3], sum = 0;

    cout << "Enter 2x3 matrix elements:\n";
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> arr[i][j];
            sum += arr[i][j];
        }
    }

    cout << "Sum = " << sum;
    return 0;
}
