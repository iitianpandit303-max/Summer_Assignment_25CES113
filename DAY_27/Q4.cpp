#include <iostream>
using namespace std;

int main() 
{
    string name;
    int roll;
    float m1, m2, m3, total, percentage;

    cout << "Enter student name: ";
    cin >> name;

    cout << "Enter roll number: ";
    cin >> roll;

    cout << "Enter marks of 3 subjects: ";
    cin >> m1 >> m2 >> m3;

    total = m1 + m2 + m3;
    percentage = total / 3;

    cout << "\nMarksheet";
    cout << "\nName: " << name;
    cout << "\nRoll No: " << roll;
    cout << "\nTotal Marks: " << total;
    cout << "\nPercentage: " << percentage << "%";

    if(percentage >= 90)
        cout << "\nGrade: A+";
    else if(percentage >= 80)
        cout << "\nGrade: A";
    else if(percentage >= 70)
        cout << "\nGrade: B";
    else if(percentage >= 60)
        cout << "\nGrade: C";
    else if(percentage >= 40)
        cout << "\nGrade: D";
    else
        cout << "\nGrade: Fail";

    return 0;
}