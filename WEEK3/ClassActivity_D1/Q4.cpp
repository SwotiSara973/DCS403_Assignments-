// range-base for loop 

#include <iostream>
using namespace std;

int main() {

    int n;
    cout << "Enter a number: ";
    cin >> n;

    int sum = 0;

    // Create an array from 1 to n
    int numbers[n]; // array of size n

    for (int i = 0; i < n; i++) {
        numbers[i] = i + 1; // fill array with 1,2,3,...,n
    }

    // Range-based for loop to print numbers and calculate sum
    for (int num : numbers) {
        cout << num;
        sum += num;

        if (num != n) {
            cout << " + ";
        }
    }

    cout << endl;
    cout << "Sum = " << sum;

    return 0;
}
