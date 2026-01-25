/*
Default Arguments
*/

#include <iostream>
using namespace std;

int power(int base, int exponent = 2) {
    int result = 1;
    for (int i = 1; i <= exponent; i++)
        result *= base;
    return result;
}

int main() {
    int base, exp;

    cout << "Enter base: ";
    cin >> base;

    cout << "Enter exponent (press 0 for default 2): ";
    cin >> exp;

    if (exp == 0)
        cout << "Result: " << power(base) << endl;
    else
        cout << "Result: " << power(base, exp) << endl;

    return 0;
}
