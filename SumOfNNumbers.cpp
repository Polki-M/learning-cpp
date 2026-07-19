#include <iostream>
using namespace std;

int main () {
    int sum = 0;
    int myNum;

    cout << "---Welcome to the Sum of N numbers program---" << endl;
    cout << "Write down your number: ";
    cin >> myNum;

for (int i = 1; i <= myNum; i++) {sum += i;}

    cout << "The sum of the first " << myNum << " numbers is: " << sum << endl;

    return 0;
}