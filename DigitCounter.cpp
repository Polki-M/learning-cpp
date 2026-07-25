#include <iostream>
using namespace std;

int main() {
    int myNum, mainNum;
    int numCounter = 0;

    cout << "---Welcome to the digit counter---" << "\n";
    cout << "Give me a number and I will tell you how many digits it have: ";

    cin >> myNum;

    mainNum = myNum;


    while (myNum != 0)
    {
        myNum = myNum / 10;
        numCounter++;
    }

    if (mainNum == 0) { numCounter++;}

    cout << "Your number has " << numCounter << " digits";

    return 0;
}