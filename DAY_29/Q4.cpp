#include <iostream>
using namespace std;

struct Item {
    int id;
    string name;
    int quantity;
    float price;
};

int main()
 {
    Item item[100];
    int n = 0, choice;

    do {
        cout << "\n1 Add Item\n2 Display Items\n3 Search Item\n4 Exit\n";
        cin >> choice;

        if(choice == 1)
         {
            cout << "Enter item id: ";
            cin >> item[n].id;

            cout << "Enter item name: ";
            cin >> item[n].name;

            cout << "Enter quantity: ";
            cin >> item[n].quantity;

            cout << "Enter price: ";
            cin >> item[n].price;

            n++;
        }
        else if(choice == 2)
         {
            for(int i = 0; i < n; i++) 
            {
                cout << item[i].id << " "
                     << item[i].name << " "
                     << item[i].quantity << " "
                     << item[i].price << endl;
            }
        }
        else if(choice == 3)
         {
            int id, found = 0;

            cout << "Enter item id: ";
            cin >> id;

            for(int i = 0; i < n; i++)
             {
                if(item[i].id == id) {
                    cout << "Item Found\n";
                    cout << "Name: " << item[i].name << endl;
                    cout << "Quantity: " << item[i].quantity << endl;
                    cout << "Price: " << item[i].price;
                    found = 1;
                }
            }

            if(found == 0)
                cout << "Item not found";
        }

    } while(choice != 4);

    return 0;
}