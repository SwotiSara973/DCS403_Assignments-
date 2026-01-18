// Characters
// Question 2: Character Case Alternator
#include <iostream>
using namespace std;

int main() {
    string str;
    getline(cin, str);

    for(int i=0;i<str.length();i++){
        if(isalpha(str[i])){
            if(i%2 == 1) str[i] = toupper(str[i]);
            else str[i] = tolower(str[i]);
        }
    }
    cout << str << endl;
    return 0;
}
