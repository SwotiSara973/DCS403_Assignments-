// 2. If-Else Statement
// Question: Write a program to find the greater of two numbers.
// Hint: Use an if-else condition to compare the two numbers.

#include <iostream>
using namespace std;

int main() {
    int a, b;
    cout << "Enter first number: ";
    cin >> a;
    cout << "Enter second number: ";
    cin >> b;

    if (a > b) {
        cout << a << " is greater" << endl;
    } else {
        cout << b << " is greater" << endl;
    }

    return 0;
}
