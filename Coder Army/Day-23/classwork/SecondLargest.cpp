#include <iostream>
using namespace std;

int print2largest(int arr[], int n)
{
    // code here
    int largest = INT16_MIN;

    // find largest element
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > largest)
            largest = arr[i];
    }
    // find second largest
    int second = -1;

    for (int i = 0; i < n; i++)
    {
        if (largest != arr[i])
            second = max(second, arr[i]);
    }
    return second;
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
    int arr[arraySize];

    // taking number
    for (int i = 0; i < arraySize; i++)
        cin >> arr[i];

    int result = print2largest(arr, arraySize);
    cout << "Second Largest is: " << result << endl;

    return 0;
}
