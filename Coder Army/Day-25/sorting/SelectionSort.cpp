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

    // impliment a selection sort
    for (int i = 0; i < n; i++)
    {
        int index = i;
        // select smallest number from i to n-1
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[index])
                index = j;
        }
        swap(arr[i], arr[index]);
    }

    // final sorted array
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";

    return 0;
}
