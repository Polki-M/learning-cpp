#include <iostream>
using namespace std;

int main () {
    double num, max, min;

    cout << "---Welcome to the Max/Min finder program" << "\n";
    cout << "I'll tell you what is the greater and the least number" << "\n";

    cout << "Give me your first number: " << "\n";
    cin >> num;

    max = min = num;

    for(int i = 2; i <= 3; i++) {
        cout << "Give me your number " << i << ": ";
        cin >> num;
        if (num > max) max = num;
        if (num < min) min = num;
    }

    cout << "\n";
    cout << "----------------------" << "\n";
    cout << "The greater number is: " << max << "\n";
    cout << "The least number is: " << min << "\n"; 
    cout << "----------------------" << "\n";
    cout << "\n";

    return 0;
}