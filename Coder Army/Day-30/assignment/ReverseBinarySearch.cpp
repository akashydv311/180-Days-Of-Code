
// 1 : An array is given in decreasing order with Key, Find the index of key, if key is not present, print - 1;

#include <iostream>
using namespace std;

int ReverseBinarySearch(int nums[], int n, int target)
{
    int start = 0, end = n - 1, mid = -1;

    while (start <= end)
    {
        mid = start + (end - start / 2);

        if (nums[mid] == target)
            // return index
            return mid;
        else if (nums[mid] < target)
            // move left
            end = mid - 1;
        else
            // move right
            start = mid + 1;
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
    int index = ReverseBinarySearch(arr, n, key);
    cout << "Index is: " << index << endl;

    return 0;
}
