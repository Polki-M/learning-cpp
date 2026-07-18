#include <iostream>
using namespace std;

int main() {
    int myGrade;

    cout << "---Welcome to the Grade Classification program---" << "\n";
    cout << "Plese, tell me your last exam's grade: ";

    cin >> myGrade;

    switch (myGrade) {
        case 1:
        case 2:
        case 3:
        case 4:
            cout << "You got an F";
            break;
        case 5:
        case 6:
            cout << "You got a C";
            break;
        case 7:
        case 8:
            cout << "You got a B";
            break;
        case 9:
        case 10:
            cout << "You got an A";
            break;
            
        default:
            cout << "Invalid grade";
            break;

    }
    return 0;
}