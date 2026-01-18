// 5. Leap Year Logical Condition
// Question: Write a program to check if a year is a leap year.
// Hint: A leap year is divisible by 4 but not by 100, OR divisible by 400.

#include <iostream>
using namespace std;

int main() {
    int year;
    cout << "Enter a year: ";
    cin >> year;

    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        cout << year << " is a Leap Year" << endl;
    } else {
        cout << year << " is Not a Leap Year" << endl;
    }

    return 0;
}
