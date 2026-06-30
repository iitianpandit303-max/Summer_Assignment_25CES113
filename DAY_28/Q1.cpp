#include <iostream>
using namespace std;

struct Book {
    int id;
    string name;
    string author;
};

int main()
 {
    Book b[100];
    int n = 0, choice;

    do {
        cout << "\n1 Add Book\n2 Display Books\n3 Search Book\n4 Exit\n";
        cin >> choice;

        if(choice == 1) 
        {
            cout << "Enter book id, name, author: ";
            cin >> b[n].id >> b[n].name >> b[n].author;
            n++;
        }
        else if(choice == 2) 
        {
            for(int i = 0; i < n; i++) 
            {
                cout << b[i].id << " " << b[i].name << " " << b[i].author << endl;
            }
        }
        else if(choice == 3)
         {
            int id, found = 0;
            cout << "Enter book id: ";
            cin >> id;

            for(int i = 0; i < n; i++)
             {
                if(b[i].id == id) {
                    cout << "Book Found: " << b[i].name << " by " << b[i].author;
                    found = 1;
                }
            }

            if(found == 0)
                cout << "Book not found";
        }

    } while(choice != 4);

    return 0;
}