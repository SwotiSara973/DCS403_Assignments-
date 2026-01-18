// 4. Nested If – Positive/Negative & Even/Odd
#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    if (num > 0) {
        if (num % 2 == 0) {
            cout << "Positive and Even" << endl;
        } else {
            cout << "Positive and Odd" << endl;
        }
    } else if (num < 0) {
        cout << "Negative" << endl;
    } else {
        cout << "Zero" << endl;
    }

    return 0;
}
