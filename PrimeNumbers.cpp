#include <iostream>
#include <cmath>
using namespace std;

int main () {
    int myNum;
    bool isPrime = true;

    cout << "---Welcome to the Prime Number detector---" << endl;
    cout << "Enter a number: ";

    cin >> myNum;

    if (myNum <= 1)
    {
        cout << myNum << " is not a prime number" << endl;
    return 0;
    }


    for (int i = 2; i <= sqrt(myNum); i++)
    {
        if (myNum % i == 0){isPrime = false;}
    }
    

    if (isPrime == true)
    {
        cout << myNum << " is a prime number" << endl;
    }
        else {cout << myNum << " is not a prime number" << endl;}
       

    return 0;
}