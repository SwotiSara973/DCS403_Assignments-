#include <iostream>
using namespace std;

int main() {
    string sentence;
    cout << "Enter a sentence: ";
    getline(cin, sentence);

    int wordCount = 0;
    bool insideWord = false;

    for(int i = 0; i < sentence.length(); i++) {
        if(sentence[i] != ' ' && !insideWord) {
            wordCount++;
            insideWord = true;
        } else if(sentence[i] == ' ') {
            insideWord = false;
        }
    }

    cout << "Total number of words: " << wordCount << endl;
    return 0;
}
