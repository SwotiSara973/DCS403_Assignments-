// Arrays (Basics)
//Q1. Store and Display 5 Integers
// Declare an array of 5 integers.
// Take input from the user and print all elements.


#include <iostream>
using namespace std;

int main() {
    int arr[5];   

   
    cout << "Enter 5 integers:\n";
    for (int i = 0; i < 5; i++) {
        cin >> arr[i];
    }

  
    cout << "You entered:\n";
    for (int i = 0; i < 5; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
