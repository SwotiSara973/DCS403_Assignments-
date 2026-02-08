#include <iostream>
using namespace std;

// Recursive function for Towers of Hanoi
void towersOfHanoi(int n, char source, char destination, char auxiliary) {
    if (n == 1) {  // Base Case
        cout << "Move disk 1 from " << source << " to " << destination << endl;
        return;
    }

    // Recursive Case
    // Step 1: Move top n-1 disks from source to auxiliary
    towersOfHanoi(n - 1, source, auxiliary, destination);

    // Step 2: Move the largest disk from source to destination
    cout << "Move disk " << n << " from " << source << " to " << destination << endl;

    // Step 3: Move the n-1 disks from auxiliary to destination
    towersOfHanoi(n - 1, auxiliary, destination, source);
}

int main() {
    int n = 3; // number of disks
    cout << "Towers of Hanoi solution for " << n << " disks:\n";
    towersOfHanoi(n, 'A', 'C', 'B'); // A=source, C=destination, B=auxiliary
    return 0;
}
