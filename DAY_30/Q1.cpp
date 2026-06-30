#include <iostream>
using namespace std;

int main() 
{
    int roll[100], n = 0, choice;
    string name[100];
    float marks[100];

    do {
        cout << "\n1 Add Student\n2 Display Students\n3 Search Student\n4 Exit\n";
        cin >> choice;

        if(choice == 1)
         {
            cout << "Enter roll, name, marks: ";
            cin >> roll[n] >> name[n] >> marks[n];
            n++;
        }
        else if(choice == 2)
         {
            for(int i = 0; i < n; i++)
             {
                cout << roll[i] << " " << name[i] << " " << marks[i] << endl;
            }
        }
        else if(choice == 3)
         {
            int r, found = 0;
            cout << "Enter roll number: ";
            cin >> r;

            for(int i = 0; i < n; i++)
             {
                if(roll[i] == r) 
                {
                    cout << "Student Found: " << name[i] << " " << marks[i];
                    found = 1;
                }
            }

            if(found == 0)
                cout << "Student not found";
        }

    } while(choice != 4);

    return 0;
}