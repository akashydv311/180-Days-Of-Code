
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

    // implimenting insertion sort
    for (int i = 1; i < n; i++)
    {
        for (int j = i; j > 0; j--)
        {
            if (arr[j] < arr[j - 1])
                swap(arr[j], arr[j - 1]);
        }
    }

    // final sorted array
    cout << "Sorted Array: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";

    return 0;
}
