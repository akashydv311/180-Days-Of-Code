// Selection Sort Algorithm to sort the array of integers in decreasing order.
#include <iostream>
using namespace std;
int main()
{
    // taking array size from user
    int n;
    cout << "Enter a size for array: ";
    cin >> n;
    int arr[n];

    // taking values in array from use
    cout << "Enter values in " << n << " Size array: " << endl;
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    // impliment a selection sort in decreasing order
    for (int i = 0; i < n; i++)
    {
        int index = i;
        // find the largest number from array
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] > arr[index])
                index = j;
        }
        swap(arr[i], arr[index]);
    }

    // decreasing order selection sort array
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";

    return 0;
}
