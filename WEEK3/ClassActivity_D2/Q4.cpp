/*
Overloading Functions
*/

#include <iostream>
using namespace std;

// Area of circle
double area(double radius) {
    return 3.14 * radius * radius;
}

// Area of rectangle
double area(double length, double breadth) {
    return length * breadth;
}

int main() {
    double radius, length, breadth;

    cout << "Enter radius of circle: ";
    cin >> radius;
    cout << "Area of circle: " << area(radius) << endl;

    cout << "Enter length and breadth of rectangle: ";
    cin >> length >> breadth;
    cout << "Area of rectangle: " << area(length, breadth) << endl;

    return 0;
}
