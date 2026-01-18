// Strings
// Question 4: Remove Vowels from a String
#include <iostream>
using namespace std;

int main() {
    string str;
    getline(cin, str);
    string result = "";

    for(int i=0;i<str.length();i++){
        char ch = tolower(str[i]);
        if(ch!='a' && ch!='e' && ch!='i' && ch!='o' && ch!='u') result += str[i];
    }

    cout << result << endl;
    return 0;
}
