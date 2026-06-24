#include <iostream>
using namespace std ;

int main() 
{
    char str[200];
    cin.getline(str, 200);

    int maxLen = 0, currentLen = 0;
    string longest = "", current = "";

    for(int i = 0; ; i++) {
        if(str[i] != ' ' && str[i] != '\0')
         {
            current += str[i];
            currentLen++;
        }
        else {
            if(currentLen > maxLen) 
            {
                maxLen = currentLen;
                longest = current;
            }

            current = "";
            currentLen = 0;
        }

        if(str[i] == '\0')
            break;
    }

    cout << "Longest Word = " << longest;

    return 0 ;
}