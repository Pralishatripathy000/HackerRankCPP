#include <iostream>
using namespace std;

int main() {

    int a, b, temp;

    cin >> a >> b;

    cout << "Before Swap" << endl;
    cout << a << " " << b << endl;

    temp = a;
    a = b;
    b = temp;

    cout << "After Swap" << endl;
    cout << a << " " << b << endl;

    return 0;
}