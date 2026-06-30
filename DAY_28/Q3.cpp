#include <iostream>
using namespace std;

int main() 
{
    int seats[10] = {0};
    int choice, seatNo;

    do {
        cout << "\n1 Book Ticket\n2 Cancel Ticket\n3 Show Seats\n4 Exit\n";
        cin >> choice;

        if(choice == 1)
         {
            cout << "Enter seat number 1-10: ";
            cin >> seatNo;

            if(seatNo < 1 || seatNo > 10)
             {
                cout << "Invalid seat number";
            }
            else if(seats[seatNo - 1] == 0) 
            {
                seats[seatNo - 1] = 1;
                cout << "Ticket booked successfully";
            }
            else {
                cout << "Seat already booked";
            }
        }
        else if(choice == 2) 
        {
            cout << "Enter seat number 1-10: ";
            cin >> seatNo;

            if(seatNo < 1 || seatNo > 10) 
            {
                cout << "Invalid seat number";
            }
            else if(seats[seatNo - 1] == 1)
             {
                seats[seatNo - 1] = 0;
                cout << "Ticket cancelled";
            }
            else {
                cout << "Seat is already available";
            }
        }
        else if(choice == 3) {
            for(int i = 0; i < 10; i++)
             {
                cout << "Seat " << i + 1 << ": ";

                if(seats[i] == 0)
                    cout << "Available\n";
                else
                    cout << "Booked\n";
            }
        }

    } while(choice != 4);

    return 0;
}