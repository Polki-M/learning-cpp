#include <iostream>
using namespace std;

int main() {

    int myMoney = 12500;
    int myWithdraw;
    int myDeposit;
    int i;

    cout << "-------| Welcome to the BasicATM program |-------!" << endl;

    do
    {
        cout << endl;

        cout << "Select an option:" << endl << endl;

        cout << "1. Check money" << endl;
        cout << "2. Withdraw" << endl;
        cout << "3. Deposit" << endl;
        cout << "4. Exit" << endl;
        cout << "--------------" << endl;

        cin >> i;

        switch (i)
        {
            case 1:
                cout << "--------------" << endl;
                cout << "You have $" << myMoney;
                cout << endl << "--------------" << endl;
            break;

            case 2:
                cout << "--------------" << endl;
                cout << "How much money do you want to withdraw?" << endl; 
                cin >> myWithdraw;
                cout << "--------------" << endl;
                
                if (myMoney >= myWithdraw)
                {
                    cout << "--------------" << endl;
                    cout << "$" << myWithdraw << " withdrawed succesfully" << endl;
                    cout << "Your new balance is: $" << myMoney - myWithdraw;
                    myMoney = myMoney - myWithdraw;
                    cout << endl << "--------------" << endl;
                }
                    else
                    {
                        cout << "--------------" << endl;
                        cout << "You don't have enough money to withdraw.";
                        cout << endl << "--------------" << endl;
                    }
                
            break;

            case 3:
                cout << "--------------" << endl;
                cout << "How much money do you want to deposit?" << endl;
                cin >> myDeposit;
                cout << "--------------" << endl;

                cout << "--------------" << endl;
                cout << "$" << myDeposit << " deposited succesfully" << endl;
                cout << "Your new balance is: $" << myMoney + myDeposit;
                myMoney = myMoney + myDeposit;
                cout << endl << "--------------" << endl;
            break;

            case 4: 
                cout << "--------------" << endl;
                cout << "Exitted succesfully "; break;
                cout << endl << "--------------" << endl;

            default: cout << "Please, input a right number...";
        }
    }
    while (i < 4 && i > 0); 

    return 0;
}