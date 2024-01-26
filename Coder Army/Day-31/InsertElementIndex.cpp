
/*
Given a sorted array of distinct integers and a target value, return the index if the target is found.
If not, return the index where it would be if it were inserted in order.
You must write an algorithm with O(log n) runtime complexity.
*/

#include <iostream>
using namespace std;

int searchInsertPosition(int arr[], int n, int target)
{
    int start = 0, end = n - 1, mid;

    while (start <= end)
    {
        // find mid
        mid = start + (end - start) / 2;

        // if find
        if (arr[mid] == target)
            return mid;
        else if (arr[mid] < target)
            start = mid + 1;
        else
            end = mid - 1;
    }
    return start;
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
    int index = searchInsertPosition(arr, n, key);

    cout << "Sutable Index : " << index << endl;

    return 0;
}