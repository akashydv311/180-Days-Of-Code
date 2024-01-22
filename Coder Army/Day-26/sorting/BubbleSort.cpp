
#include <iostream>
using namespace std;
int main()
{
    int arr[100];
    int n;
    cout << "Enter the size of array: ";
    cin >> n;
    // values in an array
    cout << "Enter values in an array: " << endl;
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    // impliment bubble sort
    for (int i = n - 1; i >= 0; i--)
    {
        for (int j = 0; j < i; j++)
        {
            if (arr[j] > arr[j + 1])
                swap(arr[j], arr[j + 1]);
        }
    }
    // final array
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";

    return 0;
}
