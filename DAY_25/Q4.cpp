#include <iostream>
using namespace std ;

int main()
 {
    int n;
    cin >> n;

    string word[n];

    for(int i = 0; i < n; i++)
        cin >> word[i];

    for(int i = 0; i < n - 1; i++)
     {
        for(int j = i + 1; j < n; j++) 
        {
            if(word[i].length() > word[j].length())
             {
                string temp = word[i];
                word[i] = word[j];
                word[j] = temp;
            }
        }
    }

    cout << "Words Sorted by Length:\n";

    for(int i = 0; i < n; i++)
        cout << word[i] << " ";

    return 0 ;
}