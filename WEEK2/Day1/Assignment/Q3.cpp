// 3. If-Else Ladder – Assign Grades
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
