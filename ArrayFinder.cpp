    #include <iostream>
    using namespace std;

    int main() {

        int rows = 5;
        int columns = 5;
        int myNum;

        bool found = false;

        cout << "Welcome to the number finder!" << endl;
        cout << "Please, input a number from 1 to 25, I will find it for you!" << endl;
        
        cin >> myNum;

        int myArray [rows] [columns] = {
            {23, 1, 8, 4, 9},
            {12, 6, 20, 15, 19},
            {2, 7, 11, 16, 22},
            {25, 14, 5, 10, 17},
            {3, 13, 18, 21, 24}
        };

        for (int i = 0; i < rows && !found; i++) {
            /* El bucle for seguirà funcionant sempre que la condició sigui certa, per tant,
            quan found = true, el bucle pararà perquè !found serà false. */ 
            for (int j = 0; j < columns; j++) {
            
                if (myNum == myArray [i] [j]) {

                    cout << "The number " << myNum << " is located in the row number " << i + 1 << ", and the column number " << j + 1 << ".";

                    found = true;
                    break;
                    }
                }
            }
    
    if (!found) {
        cout << "The number " << myNum << " is not in the array.";
    }
    
        return 0;
    }