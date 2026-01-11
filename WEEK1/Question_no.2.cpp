#include <iostream>
using namespace std;

int main() {
    double celsius;
    const double MULTIPLIER = 9.0;
    const double DIVIDER = 5.0;
    const double OFFSET = 32.0;

    cout << "Enter Temperature in Celsius: ";
    cin >> celsius;

    double fahrenheit = (celsius * MULTIPLIER / DIVIDER) + OFFSET;

    cout << "Celsius Temperature: " << celsius << "C" << endl;
    cout << "Formula Used: Fahrenheit = (Celsius * 9 / 5) + 32" << endl;
    cout << "Multiplier (9): " << MULTIPLIER << endl;
    cout << "Divider (5): " << DIVIDER << endl;
    cout << "Offset (32): " << OFFSET << endl;
    cout << "Equivalent Fahrenheit Temperature: " << fahrenheit << "F" << endl;

    return 0;
}
