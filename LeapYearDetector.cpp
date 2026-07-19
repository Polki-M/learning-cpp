#include <iostream>
using namespace std;

int main () {
    int year;

    cout << "---Welcome to the Leap Year Detector---" << "\n";
    cout << "Tell me what year you want to know if it's a leap year: ";
    cin >> year;

    if ((year % 4 == 0) && ( year % 100 != 0 || year % 400 == 0  )) {cout << year << " Is a leap year!"; }
    else {cout << year << " Is not a leap year.";}

    return 0;
}