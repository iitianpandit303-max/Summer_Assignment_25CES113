#include <iostream>
using namespace std;

int main()
 {
    int n, largest = 0;
    cin >> n;

    for(int i = 2; i <= n; i++)
     {
        if(n % i == 0) {

            bool prime = true;

            for(int j = 2; j < i; j++) 
            {
                if(i % j == 0) {
                    prime = false;
                    break;
                }
            }

            if(prime)
                largest = i;
        }
    }

    cout << "Largest Prime Factor = " << largest;

    return 0;
}