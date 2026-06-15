#include <iostream>
using namespace std;

int main()
 {
    int n;

    cin >> n;
    int a[n];

    for(int i = 0; i < n; i++)
        cin >> a[i];

    int temp[n], j = 0;

    for(int i = 0; i < n; i++)
     {
        if(a[i] != 0) {
            temp[j] = a[i];
            j++;
        }
    }

    while(j < n) 
    {
        temp[j] = 0;
        j++;
    }

    cout << "Array after moving zeroes: ";

    for(int i = 0; i < n; i++)
        cout << temp[i] << " ";

    return 0;
}