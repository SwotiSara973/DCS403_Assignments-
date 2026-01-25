/*
Pascal's Triangle
*/

#include <iostream>
using namespace std;

// Function to calculate factorial
long long factorial(int n) {
    long long f = 1;
    for (int i = 1; i <= n; i++)
        f *= i;
    return f;
}

// Function to calculate nCr
long long nCr(int n, int r) {
    return factorial(n) / (factorial(r) * factorial(n - r));
}

int main() {
    int n;
    cout << "Enter number of rows: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        // Print leading spaces for alignment
        for (int s = 0; s < n - i - 1; s++)
            cout << "  "; // double space for better alignment

        // Print numbers in the row
        for (int j = 0; j <= i; j++) {
            cout << nCr(i, j) << "   "; // 3 spaces for spacing
        }
        cout << endl;
    }

    return 0;
}
