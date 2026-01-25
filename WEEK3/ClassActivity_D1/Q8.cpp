#include <iostream>
using namespace std;

int main() {

    int number;
    int sum = 0;

    cout << "Enter numbers to add (0 to stop): " << endl;

    cin >> number;

    while (number != 0) {   // loop continues until sentinel 0 is entered
        sum += number;      // add number to sum
        cin >> number;      // read next number
    }

    cout << "Sum = " << sum << endl;

    return 0;
}
