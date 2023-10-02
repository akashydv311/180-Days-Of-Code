// Given a number n, print the corresponding month of it. For n=1, print Jan, n=2, print Feb…, if the user puts any invalid number, don’t do anything. (Use switch here)
#include <iostream>
using namespace std;
int main()
{
    int month;
    // taking month
    cout << "Enter month number:";
    cin >> month;
    // result
    switch (month)
    {
    case 1:
        cout << "Jan" << endl;
        break;
    case 2:
        cout << "Fab" << endl;
        break;
    case 3:
        cout << "Mar" << endl;
        break;
    case 4:
        cout << "Apr" << endl;
        break;
    case 5:
        cout << "May" << endl;
        break;
    case 6:
        cout << "Jun" << endl;
        break;
    case 7:
        cout << "July" << endl;
        break;
    case 8:
        cout << "Aug" << endl;
        break;
    case 9:
        cout << "sep" << endl;
        break;
    case 10:
        cout << "Oct" << endl;
        break;
    case 11:
        cout << "Nov" << endl;
        break;
    case 12:
        cout << "Dec" << endl;
        break;
    default:
        cout << "number should 1 - 12 only";
    }

    return true;
}
