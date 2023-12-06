#include <iostream>
using namespace std;
int main()
{
    // array init
    int arr1[5];
    arr1[0] = 89;
    arr1[1] = 29;
    arr1[2] = 99;

    // arrays init
    int arr2[] = {45, 32, 3, 45, 56};

    // arrays init
    int arr3[] = {0};

    // Code
    int n = 5;
    int arr[n] = {0};

    // taking input in an array
    cout << "Enter " << n << " Elements: " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    // accessing arry element
    cout << "Array elements is: " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return true;
}
