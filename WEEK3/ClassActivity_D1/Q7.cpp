// Keyword:continue

#include <iostream>
using namespace std;

int main() {

    for (int i = 1; i <= 5; i++) {
        if (i == 3) continue;  // skip this iteration
        cout << i << " ";
    }

    cout << endl;
    return 0;
}
