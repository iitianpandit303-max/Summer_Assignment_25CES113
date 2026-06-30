// Student Management Mini Project

#include <iostream>
using namespace std;

int roll[100], n = 0;
string name[100];
float marks[100];

void addStudent()
 {
    cout << "Enter roll number: ";
    cin >> roll[n];

    cout << "Enter name: ";
    cin >> name[n];

    cout << "Enter marks: ";
    cin >> marks[n];

    n++;
    cout << "Student added successfully";
}

void displayStudents() 
{
    if(n == 0)
     {
        cout << "No records found";
        return;
    }

    for(int i = 0; i < n; i++)
     {
        cout << roll[i] << " " << name[i] << " " << marks[i] << endl;
    }
}

void searchStudent()
 {
    int r, found = 0;

    cout << "Enter roll number to search: ";
    cin >> r;

    for(int i = 0; i < n; i++) 
    {
        if(roll[i] == r) {
            cout << "Student Found\n";
            cout << "Roll: " << roll[i] << endl;
            cout << "Name: " << name[i] << endl;
            cout << "Marks: " << marks[i] << endl;
            found = 1;
        }
    }

    if(found == 0)
        cout << "Student not found";
}

int main() 
{
    int choice;

    do {
        cout << "\n\nStudent Management System";
        cout << "\n1 Add Student";
        cout << "\n2 Display Students";
        cout << "\n3 Search Student";
        cout << "\n4 Exit";
        cout << "\nEnter choice: ";
        cin >> choice;

        if(choice == 1)
            addStudent();
        else if(choice == 2)
            displayStudents();
        else if(choice == 3)
            searchStudent();
        else if(choice == 4)
            cout << "Thank you";
        else
            cout << "Invalid choice";

    } while(choice != 4);

    return 0;
}