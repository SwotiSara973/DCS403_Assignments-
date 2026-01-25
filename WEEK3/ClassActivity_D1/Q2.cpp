#include <iostream>
using namespace std;

int main() {

    int n;
    int i = 1;
    int sum = 0;

    cout << "Enter a number: ";
    cin >> n;

    do {
        cout << i;
        sum = sum + i;

        if (i != n) {
            cout << " + ";
        }

        i = i + 1;
    } while (i <= n);

    cout << endl;
    cout << "Sum = " << sum;

    return 0;
}
