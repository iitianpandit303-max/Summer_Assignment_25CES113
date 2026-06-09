#include <iostream>
using namespace std;

int main()
 {
    int x, n;
    long long result = 1;

    cin >> x >> n;

    for (int i = 1; i <= n; i++) 
    {
        result = result * x;
    }

    cout << result;

    return 0;
}