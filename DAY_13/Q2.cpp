#include <iostream>
using namespace std;

int main()
 {
    int n, sum = 0;
    cin >> n;

    int a[n];

    for(int i = 0; i < n; i++)
     {
        cin >> a[i];
        sum += a[i];
    }

    float avg = (float)sum / n;

    cout << "Sum = " << sum << endl;
    cout << "Average = " << avg;

    return 0;
}