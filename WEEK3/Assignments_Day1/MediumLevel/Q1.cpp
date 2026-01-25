/*
MEDIUM LEVEL
Reverse Digits of a Number
Reverse Digits of a Number (while loop)
*/

#include <iostream>
using namespace std;

int main() {
    int n, rev = 0;

    cout << "Enter a number: ";
    cin >> n;

    while (n != 0) {
        rev = rev * 10 + (n % 10);
        n /= 10;
    }

    cout << "Reversed number: " << rev << endl;

    return 0;
}
