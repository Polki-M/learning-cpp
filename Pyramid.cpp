#include <iostream>
using namespace std;


int main() {
    int numRow;

    cout << "How many rows you want?"  << endl;
    
    cin >> numRow;


    for (int i = 1 ; i <= numRow; i++)
    {
        for (int k = 1; k <= numRow - i; k++)
            {
                cout << " ";
            }

        for (int j = 1; j <= i; j++)
        {           
            cout << "*";
        }
        cout << " " << endl;
    }
    
return 0;
}


