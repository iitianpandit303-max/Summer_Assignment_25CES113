#include <iostream>
using namespace std ;

int main()
 {
    char str[100];
    cin.getline(str, 100);

    int words = 1;

    for(int i = 0; str[i] != '\0'; i++)
     {
        if(str[i] == ' ')
            words++;
    }

    cout << "Number of Words = " << words;

    return 0 ;
}