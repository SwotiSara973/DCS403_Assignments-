// Characters
// Question 1: Character Frequency Counter
#include <iostream>
#include <cctype>
using namespace std;

int main() {
    string str;
    getline(cin, str);
    int freq[26] = {0};

    for(int i=0;i<str.length();i++){
        if(isalpha(str[i])){
            freq[tolower(str[i]) - 'a']++;
        }
    }

    for(int i=0;i<26;i++){
        if(freq[i] > 0){
            cout << (char)(i+'a') << ":" << freq[i] << " ";
        }
    }
    cout << endl;
    return 0;
}
