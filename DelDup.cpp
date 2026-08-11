#include <iostream>
using namespace std;

int main() {

    cout << "Welcome to the duplicate delete program!" << endl;


    int myArray [] = {1 , 2, 2, 3, 4, 5, 5, 6, 7, 7};

    int myNums = sizeof(myArray) / sizeof(myArray[0]);

    cout << "Here is the initial Array: ";

        for (int i = 0; i < myNums; i++)
        {
            cout << myArray[i] << " ";
        }

    cout << endl << "Here is the final Array: ";

    for (int i = 0; i < myNums; i++)
    {
        bool dupe = false;

        for (int j = 0; j < myNums; j++)
        {
            if (myArray[i] == myArray[j] && i != j)
            {
                dupe = true;
            }        
        }

        if (dupe == false)
        {
            cout << myArray[i] << " ";
        }
        
    }
    
    cout << endl;

    return 0;
}