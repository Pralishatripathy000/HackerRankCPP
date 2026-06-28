#include <iostream>
#include <string>
using namespace std;

int main() {

    string name;
    int age;
    float cgpa;
    char grade;

    cout << "Enter Name: ";
    cin >> name;

    cout << "Enter Age: ";
    cin >> age;

    cout << "Enter CGPA: ";
    cin >> cgpa;

    cout << "Enter Grade: ";
    cin >> grade;

    cout << "\n------ Student Details ------\n";
    cout << "Name  : " << name << endl;
    cout << "Age   : " << age << endl;
    cout << "CGPA  : " << cgpa << endl;
    cout << "Grade : " << grade << endl;

    return 0;
}