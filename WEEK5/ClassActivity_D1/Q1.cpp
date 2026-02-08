#include <iostream>
#include <vector>
using namespace std;

// Multiply number with big number stored in vector
vector<int> multiply(vector<int> &res, int x) {
    int carry = 0;
    for (int i = 0; i < res.size(); i++) {
        int prod = res[i] * x + carry;
        res[i] = prod % 10;
        carry = prod / 10;
    }
    while (carry) {
        res.push_back(carry % 10);
        carry /= 10;
    }
    return res;
}

// Recursive factorial
vector<int> factorial(int n) {
    if (n == 0 || n == 1) {
        return {1};  // base case
    }
    vector<int> res = factorial(n - 1);
    return multiply(res, n);
}

int main() {
    int n = 100;
    vector<int> res = factorial(n);

    cout << n << "! = ";
    // Result stored in reverse
    for (int i = res.size() - 1; i >= 0; i--) {
        cout << res[i];
    }
    cout << endl;
}