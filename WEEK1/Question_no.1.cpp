#include <iostream>
using namespace std;

int main() {
    int baseSalary;                  // You can put any salary here
    const double bonusPercentage = 15.0;  // Fixed bonus percentage

    cout << "Enter Base Salary: ";
    cin >> baseSalary;

    double bonusAmount = baseSalary * (bonusPercentage / 100);
    double totalSalary = baseSalary + bonusAmount;

    cout << "Base Salary: " << baseSalary << endl;
    cout << "Bonus Percentage: " << bonusPercentage << "%" << endl;
    cout << "Bonus Amount: " << bonusAmount << endl;
    cout << "Total Salary: " << totalSalary << endl;
    cout << "(Assuming bonus percentage = " << bonusPercentage << "%)" << endl;

    return 0;
}
