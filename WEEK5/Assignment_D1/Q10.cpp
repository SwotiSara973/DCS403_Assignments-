#include <iostream>
#include <string>
using namespace std;

/*
HARD LEVEL
Q10. Check if a String is Palindrome (Recursive)
Problem:
Write a recursive function to check if a string is a palindrome.
*/

// Recursive function to check palindrome
bool isPalindrome(string s, int start, int end) {
    if (start >= end) return true;       // Base case: checked all characters
    if (s[start] != s[end]) return false; // If mismatch, not palindrome
    return isPalindrome(s, start + 1, end - 1); // Recurse inward
}

int main() {
    string s;
    cout << "Enter a string: ";
    cin >> s;

    if (isPalindrome(s, 0, s.length() - 1))
        cout << "Palindrome" << endl;
    else
        cout << "Not Palindrome" << endl;

    return 0;
}
