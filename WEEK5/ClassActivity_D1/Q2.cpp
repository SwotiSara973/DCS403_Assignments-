#include <iostream>
using namespace std;

int recursion(int num); // Function prototype

int main() {
    int num;
    printf("Enter a number: ");
    cin >> num;

    printf("The factorial is %d. \n", recursion(num));
    return 0;
}

int recursion(int num) {
    // Base case: if num is 1 or 0, stop and return 1
    if (num == 1 || num == 0) {
        return 1;
    }
    // Recursive call: num * (num - 1)
    return num * recursion(num - 1);
}