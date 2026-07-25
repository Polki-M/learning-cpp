#include <iostream>
using namespace std;

int main() {
    int myNum;
    int resNum = 0;

    cout << "---Welcome to the number reverser---" << "\n";
    cout << "Give me the number you want to reverse: ";

    cin >> myNum;    

    while (myNum != 0)
    {
        resNum = resNum * 10 + (myNum % 10);
        myNum = myNum / 10;
    }
    
    cout << "Here you have your number reversed: " << resNum << "\n";

    return 0;
}