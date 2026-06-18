#include <iostream>
using namespace std ;

int main()
 {
    int n, key;
    cin >> n;

    int a[n];

    for(int i = 0; i < n; i++)
        cin >> a[i];

    cin >> key;

    int low = 0, high = n - 1;
    int found = 0;

    while(low <= high)
     {
        int mid = (low + high) / 2;

        if(a[mid] == key) 
        {
            cout << "Element found at position " << mid + 1 ;
            found = 1;
            break;
        }
        else if(a[mid] < key)
            low = mid + 1;
        else
            high = mid - 1;
    }

    if(found == 0)
        cout << "Element not found";

    return 0;
}