// Selection Sort Algorithm to sort the array of integers in increasing order by taking the highest number to last place. Question was explained in the class.

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

    // impliment a selection sort in reverse
    for (int i = n - 1; i >= 0; i--)
    {
        int index = i;
        // find a largest in array
        for (int j = i - 1; j >= 0; j--)
        {
            if (arr[j] > arr[index])
                index = j;
        }
        swap(arr[i], arr[index]);
    }

    // final array from selection sort
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";

    return 0;
}
