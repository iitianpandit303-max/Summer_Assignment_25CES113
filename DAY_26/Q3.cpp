#include <iostream>
using namespace std;

int main()
 {
    int choice;
    float balance = 5000, amount;

    do {
        cout << "\n\nATM Menu";
        cout << "\n1. Check Balance";
        cout << "\n2. Deposit Money";
        cout << "\n3. Withdraw Money";
        cout << "\n4. Exit";
        cout << "\nEnter your choice: ";
        cin >> choice;

        if(choice == 1) 
        {
            cout << "Balance = " << balance;
        }
        else if(choice == 2)
         {
            cout << "Enter amount: ";
            cin >> amount;
            balance += amount;
            cout << "Amount deposited.";
        }
        else if(choice == 3)
         {
            cout << "Enter amount: ";
            cin >> amount;

            if(amount <= balance)
             {
                balance -= amount;
                cout << "Amount withdrawn.";
            }
            else
         {
                cout << "Insufficient balance.";
            }
        }
        else if(choice == 4) 
        {
            cout << "Thank you for using ATM.";
        }
        else {
            cout << "Invalid choice.";
        }

    } while(choice != 4);

    return 0;
}