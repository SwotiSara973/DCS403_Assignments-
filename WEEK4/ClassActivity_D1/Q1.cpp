#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    int lotto[6];
    srand(time(0));

    for (int i = 0; i < 6; i++) {
        int num;
        bool duplicate;

        do {
            duplicate = false;
            num = rand() % 50 + 1;

            for (int j = 0; j < i; j++) {
                if (lotto[j] == num) {
                    duplicate = true;
                    break;
                }
            }

        } while (duplicate);

        lotto[i] = num;
    }

    cout << "Your lotto numbers are: ";
    for (int i = 0; i < 6; i++) {
        cout << lotto[i] << " ";
    }

    return 0;
}
