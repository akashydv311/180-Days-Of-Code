// 3: Bubble Sort Algorithm to sort the array of char in ascending order.

#include <iostream>
using namespace std;
int main()
{
    char arr[1000];
    int n;
    cout << "Enter the size of array: ";
    cin >> n;
    // values in an array
    cout << "Enter characters in an array: " << endl;
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    // implimenting a bubbole sort
    for (int i = n - 1; i > 0; i--)
    {
        for (int j = 0; j < i; j++)
        {
            if (arr[j] > arr[j + 1])
                swap(arr[j], arr[j + 1]);
        }
    }

    // final sorted array
    cout << "Sorted characters: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";

    return 0;
}