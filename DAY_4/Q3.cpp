#include <iostream>
#include <cmath>
using namespace std;

int main() 
{
    int num, temp, digit, sum = 0, digits = 0;

    cout << "Enter a number: ";
    cin >> num;

    temp = num;

    while (temp > 0)
     {
        digits++;
        temp /= 10;
    }

    temp = num;

    while (temp > 0)
     {
        digit = temp % 10;
        sum += pow(digit, digits);
        temp /= 10;
    }

    if (sum == num)
        cout << "Armstrong Number";
    else
        cout << "Not an Armstrong Number";

    return 0;
}