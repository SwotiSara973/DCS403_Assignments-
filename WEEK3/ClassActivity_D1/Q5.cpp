//Nested loops

#include <iostream>
using namespace std;

int main() {

    for (int i = 1; i <= 3; i++) {       // outer loop
        for (int j = 1; j <= 3; j++) {   // inner loop
            cout << i * j << "\t";       // print product
        }
        cout << endl;                     // move to next line
    }

    return 0;
}
