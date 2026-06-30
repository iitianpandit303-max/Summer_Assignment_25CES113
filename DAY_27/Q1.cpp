#include <iostream>
using namespace std;

struct Student {
    int roll;
    string name;
    float marks;
};

int main()
 {
    Student s[100];
    int n = 0, choice;

    do {
        cout << "\n1 Add Student\n2 Display Students\n3 Search Student\n4 Exit\n";
        cin >> choice;

        if(choice == 1) {
            cout << "Enter roll, name, marks: ";
            cin >> s[n].roll >> s[n].name >> s[n].marks;
            n++;
        }
        else if(choice == 2) {
            for(int i = 0; i < n; i++) 
            {
                cout << s[i].roll << " " << s[i].name << " " << s[i].marks << endl;
            }
        }
        else if(choice == 3) 
        {
            int r, found = 0;
            cout << "Enter roll number: ";
            cin >> r;

            for(int i = 0; i < n; i++) 
            {
                if(s[i].roll == r) {
                    cout << "Student Found: " << s[i].name << " " << s[i].marks;
                    found = 1;
                }
            }

            if(found == 0)
                cout << "Student not found";
        }

    } while(choice != 4);

    return 0;
}