#include <iostream>
using namespace std ;

int main()
 {
    char str[100];
    int len = 0;

    cin >> str;

    while(str[len] != '\0')
        len++;

    cout << "Length = " << len;

    return 0 ;
}