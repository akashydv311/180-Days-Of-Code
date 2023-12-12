#include <iostream>
using namespace std;

void reverseArray1(int arr[], int size)
{
    int val;
    // reverse
    for (int i = 0, j = size - 1; i < size / 2; i++, j--)
    {
        val = arr[i];
        arr[i] = arr[j];
        arr[j] = val;
    }
    // print
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}

void reverseArray2(int arr[], int size)
{
    int start = 0, end = size - 1;

    while (start < end)
    {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
    // print
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
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
        cin >> arr[i];

    reverseArray2(arr, arraySize);

    return 0;
}