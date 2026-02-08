#include <iostream>
using namespace std;

/*
HARD LEVEL
Q9. Tower of Hanoi (3 Pegs)
Problem:
Solve the Tower of Hanoi puzzle for n disks.
*/

// Recursive function to solve Tower of Hanoi
void towerOfHanoi(int n, char source, char auxiliary, char destination) {
    if (n == 0) return; // Base case: no disks to move
    towerOfHanoi(n - 1, source, destination, auxiliary); // Move n-1 disks to auxiliary
    cout << "Move disk " << n << " from " << source << " to " << destination << endl;
    towerOfHanoi(n - 1, auxiliary, source, destination); // Move n-1 disks to destination
}

int main() {
    int n;
    cout << "Enter number of disks: ";
    cin >> n;

    cout << "Steps to solve Tower of Hanoi:" << endl;
    towerOfHanoi(n, 'A', 'B', 'C'); // A=source, B=auxiliary, C=destination

    return 0;
}
