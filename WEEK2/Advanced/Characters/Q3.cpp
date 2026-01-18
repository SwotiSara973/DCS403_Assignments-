// Characters
// Question 3: Remove All Non-Alphabetic Characters


#include <iostream>
using namespace std;

int main() {
    string input, lettersOnly;
    cout << "Enter any text: ";
    getline(cin, input);

    for(int i = 0; i < input.length(); i++) {
        if((input[i] >= 'A' && input[i] <= 'Z') || (input[i] >= 'a' && input[i] <= 'z')) {
            lettersOnly += input[i];
        }
    }

    cout << "Text with only letters: " << lettersOnly << endl;
    return 0;
}
