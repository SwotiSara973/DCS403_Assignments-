// 3. If-Else Ladder Statement
// Question: Write a program to assign grades based on marks (A, B, C, F).
// Condition Table:
// 80–100: A
// 60–79 : B
// 40–59 : C
// Below 40: F

#include <iostream>
using namespace std;

int main() {
    int marks;
    cout << "Enter marks: ";
    cin >> marks;

    if (marks >= 80 && marks <= 100) {
        cout << "Grade: A" << endl;
    } else if (marks >= 60) {
        cout << "Grade: B" << endl;
    } else if (marks >= 40) {
        cout << "Grade: C" << endl;
    } else {
        cout << "Grade: F" << endl;
    }

    return 0;
}
