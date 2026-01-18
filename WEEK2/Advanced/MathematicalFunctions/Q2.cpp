// Mathematical Functions
// Question 2: Distance Between Two Points


// Mathematical Functions
// Question 2: Distance Between Two Points
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double x1, y1, x2, y2;

    cout << "Enter x1: ";
    cin >> x1;
    cout << "Enter y1: ";
    cin >> y1;
    cout << "Enter x2: ";
    cin >> x2;
    cout << "Enter y2: ";
    cin >> y2;

    
    double dx = x2 - x1;
    double dy = y2 - y1;
    double distance = sqrt(dx*dx + dy*dy);

    cout << "Distance between points = " << distance << endl;

    return 0;
}

