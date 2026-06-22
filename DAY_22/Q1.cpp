#include <iostream>
using namespace std ;

int main()
 {
    char str[100];
    cin >> str;

    int len = 0;
    while(str[len] != '\0')
        len++;

    bool palindrome = true;

    for(int i = 0; i < len / 2; i++)
     {
        if(str[i] != str[len - 1 - i]) 
        {
            palindrome = false;
            break;
        }
    }

    if(palindrome)
        cout << "Palindrome String";
    else
        cout << "Not Palindrome String";

    return 0 ;
}               