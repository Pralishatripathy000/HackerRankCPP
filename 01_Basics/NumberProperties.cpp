#include <iostream>
using namespace std;

int main() {

    int num;

    cout << "Enter a number: ";
    cin >> num;

    cout << "\nSquare      : " << num * num << endl;
    cout << "Cube        : " << num * num * num << endl;
    cout << "Double      : " << num * 2 << endl;
    cout << "Triple      : " << num * 3 << endl;
    cout << "Half        : " << num / 2.0 << endl;
    cout << "Even        : " << (num % 2 == 0) << endl;
    cout << "Positive    : " << (num > 0) << endl;
    cout << "Divisible 5 : " << (num % 5 == 0) << endl;

    return 0;
}