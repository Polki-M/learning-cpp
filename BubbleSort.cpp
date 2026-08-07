#include <iostream>
using namespace std;

int main() {

    int myNums = 10;
    int temp;
    
    cout << "Welcome to the Bubble Sort program!" << endl;

    int myArray [myNums] {7 , 14, 0, 6, 28, 9, 47, 32, 74, 65};

    cout << "Here is the inicial Array order: ";

        for (int i = 0; i < 10; i++)
        {
            cout << myArray[i] << " ";
        }

    for (int j = 0; j < myNums - 1; j++)
    {
        for (int i = 0; i < myNums; i++)
        {
            if (myArray [i] > myArray[i+1])
            {
                temp = myArray [i];
                myArray [i] = myArray [i+1];
                myArray [i+1] = temp;
            }   
        }
    }

    cout << endl << "And here is the final order: ";
    
        for (int i = 0; i < 10; i++)
        {
        cout << myArray[i] << " ";
        }
    
    return 0;
}