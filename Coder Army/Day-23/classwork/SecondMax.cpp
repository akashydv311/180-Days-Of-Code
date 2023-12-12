#include <iostream>
using namespace std;

int secondMax(int arr[], int size)
{
    int secondLarge = -1, ans = INT32_MIN;

    // find maximum
    for (int i = 0; i < size; i++)
    {
        if (arr[i] > ans)
            ans = arr[i];
    }

    // find second largest
    for (int i = 0; i < size; i++)
    {
        if (ans != arr[i])
            secondLarge = max(secondLarge, arr[i]);
    }

    return secondLarge;
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

    int result = secondMax(arr, arraySize);
    cout << "Second Largest is: " << result << endl;

    return 0;
}
