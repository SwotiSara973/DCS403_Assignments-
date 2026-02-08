#include <iostream>
using namespace std;

/*
HARD LEVEL
Q7. Tail-Recursive Fibonacci
Problem:
Rewrite Fibonacci using tail recursion.
*/

// Tail-recursive function for Fibonacci
int fibonacciTailRec(int n, int a = 0, int b = 1) {
    if (n == 0) return a;              // Base case
    return fibonacciTailRec(n - 1, b, a + b); // Tail recursion
}

int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;

    cout << "Fibonacci number at position " << n << " is: " << fibonacciTailRec(n);

    return 0;
}
