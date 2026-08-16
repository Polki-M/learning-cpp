#include <iostream>
using namespace std;

int main() {

    int myNum = 48;
    int myGuess;

    cout << "-------| Welcome to the Number Guesser program! |-------" << endl << endl;
    cout << "Try to guess the number I have in mind!" << endl;
    cout << "Here's a clue: the number is between 0 and 100." << endl;
    cout << "Please give me your first guess:" << endl;


    do
    {
        cin >> myGuess;
        
        if (myGuess < myNum)
        {
            cout << "Try a higher number!" << endl;
        }

        else if (myGuess > myNum)
        {
            cout << "Try a lower number!" << endl;
        }

    } while (myGuess != myNum);

    cout << "That's my number! You won!";
    
    return 0;
}