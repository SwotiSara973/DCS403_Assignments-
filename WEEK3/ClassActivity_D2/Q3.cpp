/*
Passing Arguments by Value
*/

#include <iostream>
using namespace std;

void square(int n) {
    cout << "Square: " << n * n << endl;
}

int main() {
    int num;

    cout << "Enter a number: ";
    cin >> num;

    square(num);
    cout << "Original number: " << num << endl;

    return 0;
}
