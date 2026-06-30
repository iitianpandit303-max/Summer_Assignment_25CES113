#include <iostream>
using namespace std;

int main() 
{
    int id[100], n = 0, choice;
    string book[100], author[100];

    do {
        cout << "\n1 Add Book\n2 Display Books\n3 Search Book\n4 Exit\n";
        cin >> choice;

        if(choice == 1) 
        {
            cout << "Enter book id, book name, author name: ";
            cin >> id[n] >> book[n] >> author[n];
            n++;
        }
        else if(choice == 2) 
        {
            for(int i = 0; i < n; i++) 
            {
                cout << id[i] << " " << book[i] << " " << author[i] << endl;
            }
        }
        else if(choice == 3)
         {
            int searchId, found = 0;
            cout << "Enter book id: ";
            cin >> searchId;

            for(int i = 0; i < n; i++) 
            {
                if(id[i] == searchId)
                 {
                    cout << "Book Found: " << book[i] << " by " << author[i];
                    found = 1;
                }
            }

            if(found == 0)
                cout << "Book not found";
        }

    } while(choice != 4);

    return 0;
}