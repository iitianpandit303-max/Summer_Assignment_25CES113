#include <iostream>
using namespace std;

int main() 
{
    int binary, rem, base = 1, decimal = 0;

    cin >> binary;

    while (binary > 0)
     {
        rem = binary % 10;
        decimal += rem * base;
        base *= 2;
        binary /= 10;
    }

    cout << decimal;

    return 0;
}