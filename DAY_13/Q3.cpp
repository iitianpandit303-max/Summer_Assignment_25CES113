#include <iostream>
using namespace std;

int main()
 {
    int n;
    cin >> n;

    int a[n];

    for(int i = 0; i < n; i++)
        cin >> a[i];

    int largest = a[0];
    int smallest = a[0];

    for(int i = 1; i < n; i++) 
    {
        if(a[i] > largest)
            largest = a[i];

        if(a[i] < smallest)
            smallest = a[i];
    }

    cout << "Largest = " << largest << endl;
    cout << "Smallest = " << smallest;

    return 0;
}