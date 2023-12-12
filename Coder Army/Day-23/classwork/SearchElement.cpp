#include <iostream>
using namespace std;

int search(int arr[], int N, int X)
{
    // Your code here
    for (int i = 0; i < N; i++)
    {
        if (arr[i] == X)
            return i;
    }
    return -1;
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

    // find element
    int find = 0;
    cin >> find;

    int ans = search(arr, arraySize, find);

    cout << "Element present at: " << ans << endl;

    return true;
}