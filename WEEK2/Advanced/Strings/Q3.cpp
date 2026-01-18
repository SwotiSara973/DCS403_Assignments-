// Strings
// Question 3: Anagram Checker


#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    string first, second;
    cout << "Enter the first word: ";
    getline(cin, first);
    cout << "Enter the second word: ";
    getline(cin, second);

    sort(first.begin(), first.end());
    sort(second.begin(), second.end());

    if(first == second)
        cout << "The words are anagrams." << endl;
    else
        cout << "The words are not anagrams." << endl;

    return 0;
}
