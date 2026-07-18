#include <iostream>
using namespace std;

int main (void) {
    int myNum;

    cout << "---Welcome to the Even/Odd detector---" << "\n";
    cout << "Please, introduce your number: ";
    
    cin >> myNum;

    if (myNum % 2 == 0) {
        cout << myNum << " Is an even number";
    }
    else {
        cout << myNum << " Is an odd number";        
    }

    return 0;
}   