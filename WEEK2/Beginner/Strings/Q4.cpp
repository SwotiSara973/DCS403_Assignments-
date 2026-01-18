// Strings
// Question 4: Concatenate two strings

#include <iostream>
#include <string>
using namespace std;

int main() {
    string str1, str2;

  
    cout << "Enter the first string: ";
    getline(cin, str1);

    
    cout << "Enter the second string: ";
    getline(cin, str2);

    
    string result = str1 + " " + str2;

    
    cout << "Concatenated String: " << result << endl;

    return 0;
}
