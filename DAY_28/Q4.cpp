#include <iostream>
using namespace std;

struct Contact {
    string name;
    string phone;
};

int main() 
{
    Contact c[100];
    int n = 0, choice;

    do {
        cout << "\n1 Add Contact\n2 Display Contacts\n3 Search Contact\n4 Exit\n";
        cin >> choice;

        if(choice == 1) 
        {
            cout << "Enter name: ";
            cin >> c[n].name;

            cout << "Enter phone number: ";
            cin >> c[n].phone;

            n++;
        }
        else if(choice == 2)
         {
            for(int i = 0; i < n; i++) 
            {
                cout << c[i].name << " - " << c[i].phone << endl;
            }
        }
        else if(choice == 3)
         {
            string searchName;
            int found = 0;

            cout << "Enter name to search: ";
            cin >> searchName;

            for(int i = 0; i < n; i++)
             {
                if(c[i].name == searchName) 
                {
                    cout << "Contact Found: " << c[i].name << " - " << c[i].phone;
                    found = 1;
                }
            }

            if(found == 0)
                cout << "Contact not found";
        }

    } while(choice != 4);

    return 0;
}