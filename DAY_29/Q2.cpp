#include <iostream>
using namespace std;

int main() 
{
    int a[100], n, choice;

    cout << "Enter size of array: ";
    cin >> n;

    cout << "Enter array elements: ";
    for(int i = 0; i < n; i++)
        cin >> a[i];

    do {
        cout << "\n1 Display\n2 Sum\n3 Largest\n4 Reverse\n5 Exit\n";
        cin >> choice;

        if(choice == 1)
         {
            for(int i = 0; i < n; i++)
                cout << a[i] << " ";
        }
        else if(choice == 2)
         {
            int sum = 0;
            for(int i = 0; i < n; i++)
                sum += a[i];

            cout << "Sum = " << sum;
        }
        else if(choice == 3) 
        {
            int largest = a[0];
            for(int i = 1; i < n; i++)
             {
                if(a[i] > largest)
                    largest = a[i];
            }

            cout << "Largest = " << largest;
        }
        else if(choice == 4)
         {
            cout << "Reverse Array: ";
            for(int i = n - 1; i >= 0; i--)
                cout << a[i] << " ";
        }

    } while(choice != 5);

    return 0;
}