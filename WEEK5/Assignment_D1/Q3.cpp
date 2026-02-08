#include <iostream>
using namespace std;

/*
MEDIUM LEVEL
Q3. Sum of Digits (Recursive)
Problem:
Write a recursive function that calculates the sum of digits of a given number.
*/

// Recursive function to find sum of digits
int sumOfDigits(int n) {
    if (n == 0) return 0;          // Base case
    return (n % 10) + sumOfDigits(n / 10); // Last digit + recursive call
}

int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;

    cout << "Sum of digits is: " << sumOfDigits(number);

    return 0;
}
