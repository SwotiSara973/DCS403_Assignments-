#include <iostream>
using namespace std;

void someAlgorithm(int n) {
    int x;
    cin >> x; // Input O(1)

    // Loop: increments by 5 each iteration, runs until i > n
    for (int i = 1; i <= n; i += 5) {
        if (i <= n) { /* Comparison O(1) */ }
    }

    cout << "Output" << endl; // O(1)
}

int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;

    someAlgorithm(n);

    return 0;
}
