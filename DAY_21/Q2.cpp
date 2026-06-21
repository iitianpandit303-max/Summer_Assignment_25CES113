#include <iostream>
using namespace std ;

int main() 
{
    char str[100];
    cin >> str;

    int len = 0;

    while(str[len] != '\0')
        len++;

    cout << "Reversed String: ";

    for(int i = len - 1; i >= 0; i--)
        cout << str[i];

    return 0 ;
}