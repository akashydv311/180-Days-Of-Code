// 1: Use Bubble Sort Algorithm to sort the array of integers in decreasing order.

#include <iostream>
using namespace std;
int main()
{
    int arr[1000];
    int n;
    cout << "Enter the size of array: ";
    cin >> n;
    // values in an array
    cout << "Enter values in an array: " << endl;
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    // impliment a bubble sort in decanding order
    for (int i = n - 1; i >= 0; i--)
    {
        for (int j = 0; j < i; j++)
        {
            if (arr[j] < arr[j + 1])
                swap(arr[j], arr[j + 1]);
        }
    }
    // final sorted arry
    cout << "Sorted Array: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";

    return 0;
}
