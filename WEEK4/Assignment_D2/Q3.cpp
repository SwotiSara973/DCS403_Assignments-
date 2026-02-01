#include <iostream>
using namespace std;

int main() {
    int arr[3][3];
    cout << "Enter 3x3 matrix:\n";
    for(int i=0;i<3;i++)
        for(int j=0;j<3;j++)
            cin >> arr[i][j];

    cout << "Row sums: ";
    for(int i=0;i<3;i++){
        int rsum=0;
        for(int j=0;j<3;j++) rsum+=arr[i][j];
        cout << rsum << " ";
    }

    cout << "\nColumn sums: ";
    for(int j=0;j<3;j++){
        int csum=0;
        for(int i=0;i<3;i++) csum+=arr[i][j];
        cout << csum << " ";
    }
    return 0;
}
