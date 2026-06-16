#include <iostream>
using namespace std;

int main()
 {
    int n, sum;
    cin >> n;

    int a[n];

    for(int i = 0; i < n; i++)
        cin >> a[i];

    cin >> sum;

    int found = 0;

    for(int i = 0; i < n; i++) 
    {
        for(int j = i + 1; j < n; j++) 
        {
            if(a[i] + a[j] == sum) 
            {
                cout << "Pair: " << a[i] << " " << a[j] << endl;
                found = 1;
            }
        }
    }

    if(found == 0)
        cout << "No pair found";

    return 0;
}