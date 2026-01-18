// Characters
// Question 3: Remove All Non-Alphabetic Characters
#include <iostream>
using namespace std;

int main() {
    string str;
    getline(cin, str);
    string result = "";

    for(int i=0;i<str.length();i++){
        if(isalpha(str[i])) result += str[i];
    }

    cout << result << endl;
    return 0;
}
