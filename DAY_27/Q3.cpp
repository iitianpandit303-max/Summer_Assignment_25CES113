#include <iostream>
using namespace std;

int main()
 {
    string name;
    float basic, hra, da, total;

    cout << "Enter employee name: ";
    cin >> name;

    cout << "Enter basic salary: ";
    cin >> basic;

    hra = basic * 0.20;
    da = basic * 0.10;
    total = basic + hra + da;

    cout << "\nSalary Slip";
    cout << "\nName: " << name;
    cout << "\nBasic Salary: " << basic;
    cout << "\nHRA: " << hra;
    cout << "\nDA: " << da;
    cout << "\nTotal Salary: " << total;

    return 0;
}