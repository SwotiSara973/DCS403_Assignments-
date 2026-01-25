//keyword: break


#include <iostream>
using namespace std;

int main() {

    for (int i = 1; i <= 10; i++) {
        if (i == 6) {
            cout << i << " ";  // print 6 first
            break;             // then exit loop
        }
        cout << i << " ";
    }

    cout << endl;  // move to next line after loop finishes

    return 0;
}
