// 6: Find the third smallest element in an array of unique elements size n. Where n>3.
#include <iostream>
using namespace std;

int thirdSmallest(int arr[], int size)
{
    int firstSmall = 0, secondSmall = 0, thirdSmall = 0;

    // find third smallest
    for (int i = 0; i < size; i++)
    {
        if (firstSmall < arr[i])
        {
            thirdSmall = secondSmall;
            secondSmall = firstSmall;
            firstSmall = arr[i];
        }
    }
    return thirdSmall;
}

int main()
{
    // input.txt output.txt created
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    // size of array
    int arraySize = 0;
    cin >> arraySize;

    // array
    int arr[arraySize] = {0};
    // cout << "Size of array: " << arraySize << endl;
    if (arraySize <= 3)
    {
        cout << "Size should be > 3" << endl;
        exit(EXIT_FAILURE);
    }
    // taking number
    for (int i = 0; i < arraySize; i++)
    {
        cin >> arr[i];
    }

    // find secound largest
    int thirdSmallestNumber = thirdSmallest(arr, arraySize);

    cout << "Third Smallest : " << thirdSmallestNumber << endl;

    return true;
}
