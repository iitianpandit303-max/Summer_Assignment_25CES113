#include <iostream>
using namespace std ;

int main()
 {
    char str[100];
    cin.getline(str, 100);

    cout << "String without spaces: ";

    for(int i = 0; str[i] != '\0'; i++)
     {
        if(str[i] != ' ')
            cout << str[i];
    }

    return 0 ;
}