// Selection Sort Algorithm to sort the array of char in ascending order.
#include <iostream>
using namespace std;
int main()
{
    // taking array size from user
    int n;
    cout << "Enter a size for array: ";
    cin >> n;
    char arr[n];

    // taking values in array from use
    cout << "Enter values in " << n << " Size array: " << endl;
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    // impliment a selection sort
    for (int i = 0; i < n; i++)
    {
        int index = i;
        // find the smallest char from array
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[index])
                index = j;
        }
        swap(arr[i], arr[index]);
    }

    // final sorted arry from selection sort
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";

    return 0;
}
