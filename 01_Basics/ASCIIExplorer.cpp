#include <iostream>
using namespace std;

int main() {

    char ch;
    int num;

    cout << "Enter a character: ";
    cin >> ch;

    cout << "ASCII Value = " << int(ch) << endl;

    cout << "\nEnter an ASCII value (0-127): ";
    cin >> num;

    cout << "Character = " << char(num) << endl;

    return 0;
}