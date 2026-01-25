//using for loop
#include <iostream>
using namespace std;

int main() {

    int n;
    int sum = 0;

    cout << "Enter a number: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {

        cout << i;
        sum = sum + i;

        if (i != n) {
            cout << " + ";
        }
    }

    cout << endl;
    cout << "Sum = " << sum;

    return 0;
}
