#include <iostream>
using namespace std;

/*
EASY LEVEL
Q1. Print Numbers from 1 to N (Basic Recursion)
Problem:
Write a recursive function that prints numbers from 1 to N.
*/

// Recursive function to print numbers from 1 to N
void printNumbers(int n) {
    if (n == 0) return;      // Base case: stop when n reaches 0
    printNumbers(n - 1);     // Recursive call: first go deeper
    cout << n << " ";        // Print number during unwinding
}

int main() {
    int n;
    cout << "Enter a number N: ";
    cin >> n;

    cout << "Numbers from 1 to " << n << " are: ";
    printNumbers(n);

    return 0;
}
