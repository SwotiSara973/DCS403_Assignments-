/*
Q1. Sum of First N Natural Numbers using for loop
*/

#include <iostream>
using namespace std;

int main() {
    int n, sum = 0;

    cout << "Enter a natural number: ";
    cin >> n;

    for (int i = 1; i <= n; i++)
        sum += i;

    cout << "Sum of first " << n << " natural numbers is: " << sum << endl;

    return 0;
}
