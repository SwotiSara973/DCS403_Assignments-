#include <iostream>
#include <string>
using namespace std;

/*
HARD LEVEL
Q8. Reverse a String Using Recursion
Problem:
Reverse a given string using recursion.
*/

// Recursive function to reverse a string
void reverseString(string &s, int start, int end) {
    if (start >= end) return;       // Base case: stop when indices meet
    swap(s[start], s[end]);         // Swap characters
    reverseString(s, start + 1, end - 1); // Recursive call inward
}

int main() {
    string s;
    cout << "Enter a string: ";
    cin >> s;

    reverseString(s, 0, s.length() - 1);

    cout << "Reversed string: " << s;

    return 0;
}
