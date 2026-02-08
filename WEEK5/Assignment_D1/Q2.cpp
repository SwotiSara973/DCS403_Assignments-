#include <iostream>
using namespace std;

/*
EASY LEVEL
Q2. Find Factorial of a Number
Problem:
Write a recursive function that returns the factorial of a number.
*/

// Recursive function to calculate factorial
int factorial(int n) {
    if (n == 0 || n == 1) return 1;  // Base case
    return n * factorial(n - 1);     // Recursive call
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    cout << "Factorial of " << n << " is: " << factorial(n);

    return 0;
}
