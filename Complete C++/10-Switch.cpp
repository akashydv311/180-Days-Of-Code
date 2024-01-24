#include <iostream>
using namespace std;

int main()
{
    int dayNumber;

    cout << "Enter a day number bitween 1 to 7: ";
    cin >> dayNumber;

    string dayName;
    switch (dayNumber)
    {
    case (1):
        dayName = "Monday";
        break;
    case (2):
        dayName = "Tuesday";
        break;
    case (3):
        dayName = "Wednesday";
        break;
    case (4):
        dayName = "Thruesday";
        break;
    case (5):
        dayName = "Friday";
        break;
    case (6):
        dayName = "Saturday";
        break;
    case (7):
        dayName = "Sunday";
        break;
    default:
        dayName = "Number should be 1 to 7 Onley";
    }
    cout << dayName;

    return 0;
}
