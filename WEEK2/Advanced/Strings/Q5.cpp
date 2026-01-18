// Strings
// Question 5: String Compression

#include <iostream>
using namespace std;

int main() {
    string text;
    cout << "Enter any text: ";
    getline(cin, text);

    string compressed = "";

    for(int i = 0; i < text.length(); i++) {
        int count = 1;
        while(i + 1 < text.length() && text[i] == text[i + 1]) {
            count++;
            i++;
        }
        compressed += text[i];
        compressed += to_string(count);
    }

    cout << "Compressed string: " << compressed << endl;
    return 0;
}
