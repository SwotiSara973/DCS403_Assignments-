/*
Static, Global, and Static Local Variables
*/

#include <iostream>
using namespace std;

int globalVar; // global variable

void demo() {
    static int staticLocal = 0;
    staticLocal++;
    cout << "Static local variable: " << staticLocal << endl;
}

int main() {
    cout << "Enter value for global variable: ";
    cin >> globalVar;

    cout << "Global variable: " << globalVar << endl;

    demo();
    demo();
    demo();

    return 0;
}
