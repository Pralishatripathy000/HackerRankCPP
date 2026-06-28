#include <iostream>
using namespace std;

int main() {

    float celsius, fahrenheit, kelvin;

    cout << "Enter Temperature in Celsius: ";
    cin >> celsius;

    fahrenheit = (celsius * 9 / 5) + 32;
    kelvin = celsius + 273.15;

    cout << "\nFahrenheit : " << fahrenheit << endl;
    cout << "Kelvin     : " << kelvin << endl;

    return 0;
}