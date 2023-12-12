// 5: Find the second largest element in an array of unique elements of size n. Where n>3.
#include <iostream>
using namespace std;

int secondLargest(int arr[], int size)
{
    // int size = sizeof(arr) / sizeof(arr[0]);
    // find second largest
    int last = 0;
    int prev = 0;

    for (int i = 0; i < size; i++)
    {
        if (last < arr[i])
        {
            prev = last;
            last = arr[i];
        }
    }
    return prev;
}

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    // size of array
    int arraySize;
    cin >> arraySize;

    // array
    int arr[arraySize] = {0};

    if (arraySize < 3)
    {
        cout << "Size should be >3" << endl;
        return 0;
    }

    // taking number
    for (int i = 0; i < arraySize; i++)
    {
        cin >> arr[i];
    }

    // find secound largest
    int largeSec = secondLargest(arr, arraySize);

    cout << "Second large: " << largeSec << endl;

    return true;
}
