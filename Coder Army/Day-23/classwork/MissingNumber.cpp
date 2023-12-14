#include <iostream>
using namespace std;

// Given an array of size N-1 such that it only contains distinct integers in the range of 1 to N. Find the missing element.

int MissingNumber(int arr[], int n)
{
    // find sum of all array element
    int sum = 0;
    for (int i = 0; i < n - 1; i++)
    {
        sum += arr[i];
    }

    // find sum of n natural numbers
    int sumNatural = n * (n + 1) / 2;

    // misisng number
    return sumNatural - sum;
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
    int n = arraySize + 1;

    // taking number
    for (int i = 0; i < arraySize; i++)
        cin >> arr[i];

    int missingNumber = MissingNumber(arr, n);
    cout << missingNumber << endl;

    return 0;
}
