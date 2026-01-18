// 5. Ternary Operator – Find Smaller Number
#include <iostream>
using namespace std;

int main() {
    int a, b;
    cout << "Enter first number: ";
    cin >> a;
    cout << "Enter second number: ";
    cin >> b;

    int smaller = (a < b) ? a : b;
    cout << "Smaller number: " << smaller << endl;

    return 0;
}
