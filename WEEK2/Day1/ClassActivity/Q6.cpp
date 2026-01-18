// 6. Bonus: Boolean Type Conversions
// Question: Demonstrate how numerical values convert to booleans.

#include <iostream>
using namespace std;

int main() {
    int a = 0;
    int b = 198;
    double c = 435.98;
    double d = -345.09;

    cout << "0 converts to " << bool(a) << endl;
    cout << "198 converts to " << bool(b) << endl;
    cout << "435.98 converts to " << bool(c) << endl;
    cout << "-345.09 converts to " << bool(d) << endl;

    return 0;
}
