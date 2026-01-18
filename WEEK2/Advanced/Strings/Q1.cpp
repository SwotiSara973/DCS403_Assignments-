// Strings
// Question 1: Count Words in a Sentence
#include <iostream>
using namespace std;

int main() {
    string str;
    getline(cin, str);

    int words = 0;
    bool inWord = false;
    for(int i=0;i<str.length();i++){
        if(str[i] != ' ' && !inWord){
            words++;
            inWord = true;
        }
        else if(str[i] == ' ') inWord = false;
    }

    cout << "Number of words: " << words << endl;
    return 0;
}
