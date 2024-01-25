// Search insert position of K in a sorted array
// https://www.geeksforgeeks.org/problems/search-insert-position-of-k-in-a-sorted-array/1

#include <iostream>
using namespace std;

int searchInsertK(int arr[], int n, int target)
{
    int start = 0, end = n - 1, mid = -1;

    // loop break condition
    while (start <= end)
    {
        // calculate mid
        mid = start + (end - start / 2);

        // is present at mid
        if (arr[mid] == target)
            return mid;
        else if (arr[mid] < target)
            // move right
            start = mid + 1;
        else
            // move left
            end = mid - 1;
    }
    // if curroser is here that mens element is not present
    return end + 1;
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
    int index = searchInsertK(arr, n, key);
    cout << "Index is: " << index << endl;

    return 0;
}
