#include <iostream>

using namespace std;

int main() {
    int oddCount = 0;
    int evenCount = 0;
    int myNum;

    cout << "Welcome to the Even / Odd detector" << endl;
    cout << "How much numbers you want to input?" << endl;

    cin >> myNum;

    int numbers [myNum];

    cout << "Please, tell me what numbers you want: ";

    for (int i = 0; i < myNum; i++)
    {
    
        cin >> numbers [i];

        if (numbers [i] % 2 == 0)
        {
        cout << numbers [i] << " Is an even number" << endl;
        evenCount++;
        }

        else {cout << numbers [i] << " Is an odd number" << endl ;
        oddCount++;}
    }

    cout << "There are " << evenCount << " even number/s." << endl;
    cout << "There are " << oddCount << " odd number/s.";

    return 0;
}   