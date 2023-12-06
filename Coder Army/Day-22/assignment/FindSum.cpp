#include <iostream>
using namespace std;
// 1: Take 20 elements from user input and find its sum with the help of an array.
int main()
{
    int arr[20];
    int sum = 0;

    // taking input
    cout << "Enter 20 Element: " << endl;
    for (int i = 0; i < 20; i++)
    {
        cin >> arr[i];
    }
    // sum of an array
    for (int i = 0; i < 20; i++)
    {
        sum += arr[i];
    }
    cout << "Sum of arrays is: " << sum << endl;

    return true;
}