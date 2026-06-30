#include <iostream>
using namespace std;

int main()
 {
    int secret = 7;
    int guess;

    cout << "Guess a number between 1 and 10: ";
    cin >> guess;

    if(guess == secret)
        cout << "Correct! You guessed the number.";
    else if(guess > secret)
        cout << "Too high!";
    else
        cout << "Too low!";

    return 0;
}