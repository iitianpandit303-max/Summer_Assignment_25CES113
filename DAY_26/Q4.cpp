#include <iostream>
using namespace std;

int main() 
{
    int score = 0;
    char ans;

    cout << "Q1. Which language is used for system programming?\n";
    cout << "a) HTML\nb) C++\nc) CSS\n";
    cin >> ans;

    if(ans == 'b')
        score++;

    cout << "\nQ2. Which symbol is used for single line comment in C++?\n";
    cout << "a) //\nb) **\nc) ##\n";
    cin >> ans;

    if(ans == 'a')
        score++;

    cout << "\nQ3. Which keyword is used to create a variable of integer type?\n";
    cout << "a) float\nb) char\nc) int\n";
    cin >> ans;

    if(ans == 'c')
        score++;

    cout << "\nYour Score = " << score << "/3";

    return 0;
}