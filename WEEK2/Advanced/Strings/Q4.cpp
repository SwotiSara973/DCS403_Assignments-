// Strings
// Question 4: Remove Vowels from a String

#include <iostream>
using namespace std;

int main() {
    string text, withoutVowels;
    cout << "Enter a string: ";
    getline(cin, text);

    for(int i = 0; i < text.length(); i++) {
        char ch = tolower(text[i]);
        if(ch != 'a' && ch != 'e' && ch != 'i' && ch != 'o' && ch != 'u') {
            withoutVowels += text[i];
        }
    }

    cout << "String without vowels: " << withoutVowels << endl;
    return 0;
}
