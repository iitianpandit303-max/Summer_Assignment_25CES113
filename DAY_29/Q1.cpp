#include <iostream>
using namespace std;

int main()
 {
    int choice;
    float a, b;

    do {
        cout << "\n1 Add\n2 Subtract\n3 Multiply\n4 Divide\n5 Exit\n";
        cin >> choice;

        if(choice >= 1 && choice <= 4)
         {
            cout << "Enter two numbers: ";
            cin >> a >> b;
        }

        if(choice == 1)
            cout << "Result = " << a + b;
        else if(choice == 2)
            cout << "Result = " << a - b;
        else if(choice == 3)
            cout << "Result = " << a * b;
        else if(choice == 4) {
            if(b != 0)
                cout << "Result = " << a / b;
            else
                cout << "Cannot divide by zero";
        }

    } while(choice != 5);

    return 0;
}