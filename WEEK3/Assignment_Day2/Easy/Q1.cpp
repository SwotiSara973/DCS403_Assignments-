#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the size of the square: ";
    cin >> n;

    // Outer loop for rows
    for (int i = 0; i < n; i++) {
        // Inner loop for columns
        for (int j = 0; j < n; j++) {
            cout << "*";
        }
        cout << endl; // Move to next row
    }

    return 0;
}
