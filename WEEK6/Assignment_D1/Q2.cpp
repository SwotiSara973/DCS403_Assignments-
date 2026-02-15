#include <iostream>
using namespace std;

void someAlgorithm(int n) {
    int x;
    cin >> x; // Input O(1)

    // Loop: decreases by 4 each iteration, runs until i < 1
    for (int i = n; i >= 1; i -= 4) {
        int y = i + 1; // Arithmetic O(1)
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
