#include <iostream>
using namespace std;

int main() {

    int a, b;

    cout << "Enter two numbers: ";
    cin >> a >> b;

    cout << "\nBefore Swap:\n";
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    a = a + b;
    b = a - b;
    a = a - b;

    cout << "\nAfter Swap:\n";
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    return 0;
}