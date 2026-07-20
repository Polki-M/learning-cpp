#include <iostream>
using namespace std;

int main () {
    int prev = 0;
    int act = 1;
    int myNum;

    cout << "---Welcome to Fibonacci's number succession---" << endl;
    cout << "Please, enter your digit: ";

    cin >> myNum;

    if (myNum == 1) {cout << "The first Fibonacci number are: " << prev;}

    else if (myNum == 2) {cout << "The first " << myNum << " Fibonacci numbers are: " << prev << ", " << act;}


    else {cout << "The first " << myNum << " Fibonacci numbers are: " << prev << ", " << act;
       
        for (int i = 3; i <= myNum; i++) {
        int next = prev + act;
        cout << ", " << next;
        prev = act;
        act = next;
        }
    }

        return 0;
}