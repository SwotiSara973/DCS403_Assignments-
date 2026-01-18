// Characters
// Question 2: Convert lowercase to uppercase and vice versa
#include <iostream>
#include <cctype>
using namespace std;

int main() {
    char ch;
    char choice;

    do {
        cout << "Enter a letter: ";
        cin >> ch;

        if(isalpha(ch)) {  
            if(islower(ch))
                cout << ch << " in uppercase is: " << (char)toupper(ch) << endl;
            else if(isupper(ch))
                cout << ch << " in lowercase is: " << (char)tolower(ch) << endl;
        } else {
            cout << ch << " is not a letter. Please enter a valid letter." << endl;
        }

  
        cout << "Do you want to enter another letter? (y/n): ";
        cin >> choice;

        cout << endl; 

    } while(choice == 'y' || choice == 'Y');  

    cout << "Program ended. Goodbye!" << endl;

    return 0;
}
