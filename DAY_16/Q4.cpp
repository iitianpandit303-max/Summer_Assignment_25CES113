#include <iostream>
using namespace std;

int main() 
{
    int n;
    cin >> n;

    int a[n];

    for(int i = 0; i < n; i++)
        cin >> a[i];

    cout << "Array after removing duplicates: ";

    for(int i = 0; i < n; i++)
     {
        int duplicate = 0;

        for(int j = 0; j < i; j++)
         {
            if(a[i] == a[j]) {
                duplicate = 1;
                break;
            }
        }

        if(duplicate == 0)
            cout << a[i] << " ";
    }

    return 0;
}