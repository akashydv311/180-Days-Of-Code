// Temperature Range: Write a program that checks if a given temperature is suitable for swimming. If the temperature is between 70 and 90 (Excluded) degrees Fahrenheit print yes, else NO

#include <iostream>
using namespace std;
int main()
{
    int temperature;
    // take temperature
    cout << "Enter current temperature: ";
    cin >> temperature;
    // check temperature
    if (temperature >= 70 && temperature <= 80)
    {
        cout << "Yes";
    }
    else
    {
        cout << "No";
    }
    return true;
}
