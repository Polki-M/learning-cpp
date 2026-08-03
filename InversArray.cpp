#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int myNums;
    double numSum = 0;
    double average;
    double max, min;

    cout << "Tell me how much numbers you want: ";
    cin >> myNums;

    double numbers [myNums];

    cout << "Give me your numbers: ";


    for (int i = 0; i < myNums; i++)
    {
        
        cin >> numbers [i];

        if (i == 0)
        {    
            max = numbers [0];
            min = numbers [0];
        } 

        numSum += numbers [i];
    
        if (max < numbers [i]) {max = numbers [i];}    
        if (min > numbers [i]) {min = numbers [i];}    

    }

    cout << endl << "This are your numbers: ";

    for (int i = 0; i < myNums; i++)
    {
        cout << numbers[i] << ", ";
    }
    
    cout << endl << "The sum of all your numbers is: " << numSum << endl;

    average = numSum / myNums;
    cout << "The average is: " << average << endl;

    cout << "The maximum value is: " << max << endl;
    cout << "The minimum value is: " << min << endl;

return 0;
}