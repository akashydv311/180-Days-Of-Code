#include <iostream>
using namespace std;

int BinarySearch(int arr[], int n, int key)
{

    int start = 0, end = n - 1, mid = -1;

    while (start <= end)
    {
        // mid = (start + end) / 2; // it may cause integer overflow
        mid = start + (end - start / 2);

        if (key == arr[mid])
            return mid;
        else if (arr[mid] < key)
            // move right side
            start = mid + 1;
        else
            // move left side
            end = mid - 1;
    }

    return -1;
}

int main()
{
    int arr[100], n, key;

    // Please create input.txt output.txt
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    // cout << "Enter the size of array: ";
    cin >> n;

    // cout << "Enter values: " << endl;
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    // cout << "Enter element to serach in an array: ";
    cin >> key;

    // binary search find the key index in array
    int index = BinarySearch(arr, n, key);
    cout << "Index is: " << index << endl;

    return 0;
}
