#include <iostream>
using namespace std;

/*
HARD LEVEL
Q6. Fibonacci Number (Recursive)
Problem:
Compute the nth Fibonacci number using recursion.
*/

// Recursive function to compute Fibonacci
int fibonacci(int n) {
    if (n == 0) return 0;  // Base case
    if (n == 1) return 1;  // Base case
    return fibonacci(n - 1) + fibonacci(n - 2); // Recursive call
}

int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;

    cout << "Fibonacci number at position " << n << " is: " << fibonacci(n);

    return 0;
}
