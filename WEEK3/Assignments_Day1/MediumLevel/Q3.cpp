/*
MEDIUM LEVEL
Factorial of a Number
*/

#include <iostream>
using namespace std;

int main() {
    int n;
    long long fact = 1;

    cout << "Enter a number: ";
    cin >> n;

    for (int i = 1; i <= n; i++)
        fact *= i;

    cout << "Factorial is: " << fact << endl;

    return 0;
}
