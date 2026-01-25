/*
Constant Reference Parameters
*/

#include <iostream>
#include <string>
using namespace std;

void display(const string &msg) {
    cout << msg << endl;
}

int main() {
    string text;

    cout << "Enter a message: ";
    getline(cin, text);

    display(text);

    return 0;
}
