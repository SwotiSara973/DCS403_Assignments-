// Strings
// Question 2: Find the Longest Word in a Sentence

#include <iostream>
#include <sstream>
using namespace std;

int main() {
    string sentence;
    cout << "Enter a sentence: ";
    getline(cin, sentence);

    string word, longestWord = "";
    stringstream ss(sentence);

    while(ss >> word) {
        if(word.length() > longestWord.length()) {
            longestWord = word;
        }
    }

    cout << "The longest word is: " << longestWord << endl;
    return 0;
}
