// Strings
// Question 5: String Compression
#include <iostream>
using namespace std;

int main() {
    string str;
    getline(cin, str);

    for(int i=0;i<str.length();i++){
        int count = 1;
        while(i+1 < str.length() && str[i] == str[i+1]){
            count++;
            i++;
        }
        cout << str[i] << count;
    }
    cout << endl;
    return 0;
}
