// 2. If-Else Statement – Find Greater Number
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
