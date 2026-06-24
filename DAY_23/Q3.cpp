#include <iostream>
using namespace std;

int main() 
{
    char str1[100], str2[100];

    cin >> str1 >> str2;

    int count1[26] = {0};
    int count2[26] = {0};

    for(int i = 0; str1[i] != '\0'; i++)
        count1[str1[i] - 'a']++;

    for(int i = 0; str2[i] != '\0'; i++)
        count2[str2[i] - 'a']++;

    bool anagram = true;

    for(int i = 0; i < 26; i++) 
    {
        if(count1[i] != count2[i])
         {
            anagram = false;
            break;
        }
    }

    if(anagram)
        cout << "Anagram Strings";
    else
        cout << "Not Anagram Strings";

    return 0 ;
}