#include <iostream>
using namespace std;

struct Employee {
    int id;
    string name;
    string department;
};

int main()
 {
    Employee e[100];
    int n = 0, choice;

    do {
        cout << "\n1 Add Employee\n2 Display Employees\n3 Search Employee\n4 Exit\n";
        cin >> choice;

        if(choice == 1)
         {
            cout << "Enter id, name, department: ";
            cin >> e[n].id >> e[n].name >> e[n].department;
            n++;
        }
        else if(choice == 2) {
            for(int i = 0; i < n; i++)
             {
                cout << e[i].id << " " << e[i].name << " " << e[i].department << endl;
            }
        }
        else if(choice == 3) {
            int id, found = 0;
            cout << "Enter employee id: ";
            cin >> id;

            for(int i = 0; i < n; i++)
             {
                if(e[i].id == id)
                 {
                    cout << "Employee Found: " << e[i].name << " " << e[i].department;
                    found = 1;
                }
            }

            if(found == 0)
                cout << "Employee not found";
        }

    } while(choice != 4);

    return 0;
}