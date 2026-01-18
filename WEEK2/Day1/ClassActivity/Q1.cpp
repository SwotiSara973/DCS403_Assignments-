// 1. If Statement
// Question: Write a program to check if a number is positive.
// Hint: Use a simple if condition to check whether the number is greater than 0.

#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    if (num > 0) {
        cout << "Positive number" << endl;
    }

    return 0;
}
