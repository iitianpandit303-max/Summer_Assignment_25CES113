#include <iostream>
using namespace std ;

int main()
 {
    char str[100], ch;
    int count = 0;

    cin >> str;
    cin >> ch;

    for(int i = 0; str[i] != '\0'; i++) 
    {
        if(str[i] == ch)
            count++;
    }

    cout << "Frequency = " << count;

    return 0 ;
}