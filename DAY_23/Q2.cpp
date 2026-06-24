#include <iostream>
using namespace std;

int main()
 {
    char str[100];
    cin >> str;

    for(int i = 0; str[i] != '\0'; i++)
     {
        for(int j = 0; j < i; j++)
         {
            if(str[i] == str[j])
             {
                cout << "First Repeating Character = " << str[i];
                return 0;
            }
        }
    }

    cout << "No repeating character";

    return 0 ;
}