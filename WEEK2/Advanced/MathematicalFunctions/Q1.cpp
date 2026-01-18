// Mathematical Functions
// Question 1: Quadratic Equation Roots
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double a, b, c;
    cout << "Enter a: "; cin >> a;
    cout << "Enter b: "; cin >> b;
    cout << "Enter c: "; cin >> c;

    double D = b*b - 4*a*c; // discriminant

    if(D > 0) {
        double x1 = (-b + sqrt(D)) / (2*a);
        double x2 = (-b - sqrt(D)) / (2*a);
        cout << "Roots are real and distinct: " << x1 << " and " << x2;
    } else if(D == 0) {
        double x = -b / (2*a);
        cout << "Roots are real and equal: " << x;
    } else {
        cout << "Roots are imaginary.";
    }
    return 0;
}
