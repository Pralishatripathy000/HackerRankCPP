#include <iostream>
using namespace std;

int main() {

    float basicSalary, hra, da, totalSalary;

    cout << "Enter Basic Salary: ";
    cin >> basicSalary;

    hra = basicSalary * 0.20;
    da = basicSalary * 0.50;

    totalSalary = basicSalary + hra + da;

    cout << "\nSalary Details\n";
    cout << "Basic Salary : " << basicSalary << endl;
    cout << "HRA          : " << hra << endl;
    cout << "DA           : " << da << endl;
    cout << "Total Salary : " << totalSalary << endl;

    return 0;
}