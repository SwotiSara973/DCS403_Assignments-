#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double angle;
    cout << "Enter angle: ";
    cin >> angle;

    // Convert angle from degrees to radians
    double radians = angle * M_PI / 180;

    cout << "sin(" << angle << ") = " << sin(radians) << endl;
    cout << "cos(" << angle << ") = " << cos(radians) << endl;
    cout << "tan(" << angle << ") = " << tan(radians) << endl;

    return 0;
}
