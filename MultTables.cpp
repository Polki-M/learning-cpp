#include <iostream>
using namespace std;

int main () {
    double myNum;

    cout << "---Welcome to the multiplication table generator---" << endl;
    cout << "Give me a number and I'll make it's multiplication table!" << endl << endl;
    cout << "Please imput your number here: ";

    cin >> myNum;

for (int i = 1; i < 11; i++) {cout << myNum << " * " << i << " = " << myNum * i << endl;}

    return 0;
}