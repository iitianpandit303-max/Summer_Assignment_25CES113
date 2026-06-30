#include <iostream>
using namespace std;

int main()
 {
    string name;
    int accountNo, choice;
    float balance = 0, amount;

    cout << "Enter account number: ";
    cin >> accountNo;

    cout << "Enter account holder name: ";
    cin >> name;

    do {
        cout << "\n1 Deposit\n2 Withdraw\n3 Check Balance\n4 Exit\n";
        cin >> choice;

        if(choice == 1)
         {
            cout << "Enter amount: ";
            cin >> amount;
            balance += amount;
            cout << "Amount deposited";
        }
        else if(choice == 2)
         {
            cout << "Enter amount: ";
            cin >> amount;

            if(amount <= balance) 
            {
                balance -= amount;
                cout << "Amount withdrawn";
            }
            else {
                cout << "Insufficient balance";
            }
        }
        else if(choice == 3) 
        {
            cout << "Account Holder: " << name << endl;
            cout << "Balance = " << balance;
        }

    } while(choice != 4);

    return 0;
}