#include <iostream>
using namespace std;

int main()
 {
    int n;
    cin >> n;

    int a[n - 1];
    int sum = 0;

    for(int i = 0; i < n - 1; i++) 
    {
        cin >> a[i];
        sum += a[i];
    }

    int total = n * (n + 1) / 2;
    int missing = total - sum;

    cout << "Missing Number = " << missing;

    return 0;
}