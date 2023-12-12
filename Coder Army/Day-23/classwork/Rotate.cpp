
#include <iostream>
using namespace std;

void rotate(int arr[], int n)
{
    int last = arr[n - 1];

    for (int i = n - 1; i > 0; i--)
    {
        arr[i] = arr[i - 1];
    }
    arr[0] = last;

    // print
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    // input.txt output.txt created
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    // size of array
    int arraySize;
    cin >> arraySize;

    // array
    int arr[arraySize] = {0};

    // taking number
    for (int i = 0; i < arraySize; i++)
    {
        cin >> arr[i];
    }

    rotate(arr, arraySize);

    return 0;
}
