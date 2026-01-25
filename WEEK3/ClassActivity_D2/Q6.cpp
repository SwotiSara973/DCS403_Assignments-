/*
Inline Functions
*/

#include <iostream>
using namespace std;

inline int cube(int n) {
    return n * n * n;
}

int main() {
    int x;

    cout << "Enter a number: ";
    cin >> x;

    cout << "Cube: " << cube(x) << endl;

    return 0;
}
