// Strings
// Question 2: Reverse string
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    string str;
    cin >> str;

    reverse(str.begin(), str.end());
    cout << "Reversed string: " << str << endl;
    return 0;
}
