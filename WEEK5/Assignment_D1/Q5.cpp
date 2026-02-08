#include <iostream>
using namespace std;

/*
MEDIUM LEVEL
Q5. Tail-Recursive Power Function
Problem:
Use tail recursion to compute a^b.
*/

// Tail-recursive function to calculate power
int power(int a, int b, int result = 1) {
    if (b == 0) return result;        // Base case
    return power(a, b - 1, result * a); // Tail recursion (no work after call)
}

int main() {
    int a, b;
    cout << "Enter base and exponent: ";
    cin >> a >> b;

    cout << a << "^" << b << " = " << power(a, b);

    return 0;
}
