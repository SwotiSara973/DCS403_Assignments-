// Characters
// Question 3: Count vowels and consonants
#include <iostream>
#include <cctype>
using namespace std;

int main() {
    string str;
    getline(cin, str);

    int vowels=0, consonants=0;
    for(int i=0;i<str.length();i++){
        char ch = tolower(str[i]);
        if(isalpha(ch)){
            if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u') vowels++;
            else consonants++;
        }
    }
    cout << "Vowels: " << vowels << endl;
    cout << "Consonants: " << consonants << endl;

    return 0;
}
