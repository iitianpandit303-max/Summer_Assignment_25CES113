#include <iostream>
using namespace std;

int main() 
{
    int id[100], n = 0, choice;
    string name[100], department[100];
    float salary[100];

    do {
        cout << "\n1 Add Employee\n2 Display Employees\n3 Search Employee\n4 Exit\n";
        cin >> choice;

        if(choice == 1) 
        {
            cout << "Enter id, name, department, salary: ";
            cin >> id[n] >> name[n] >> department[n] >> salary[n];
            n++;
        }
        else if(choice == 2)
         {
            for(int i = 0; i < n; i++)
             {
                cout << id[i] << " " << name[i] << " "
                     << department[i] << " " << salary[i] << endl;
            }
        }
        else if(choice == 3) 
        {
            int searchId, found = 0;
            cout << "Enter employee id: ";
            cin >> searchId;

            for(int i = 0; i < n; i++) 
            {
                if(id[i] == searchId) 
                {
                    cout << "Employee Found: " << name[i] << " "
                         << department[i] << " " << salary[i];
                    found = 1;
                }
            }

            if(found == 0)
                cout << "Employee not found";
        }

    } while(choice != 4);

    return 0;
}