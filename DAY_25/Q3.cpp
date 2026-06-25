#include <iostream>
using namespace std ;

int main()
 {
    int n;
    cin >> n;

    string name[n];

    for(int i = 0; i < n; i++)
        cin >> name[i];

    for(int i = 0; i < n - 1; i++) 
    {
        for(int j = i + 1; j < n; j++) 
        {
            if(name[i] > name[j]) 
            {
                string temp = name[i];
                name[i] = name[j];
                name[j] = temp;
            }
        }
    }

    cout << "Sorted Names:\n";

    for(int i = 0; i < n; i++)
        cout << name[i] << endl;

    return 0 ;
}