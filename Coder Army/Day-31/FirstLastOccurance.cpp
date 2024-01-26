

// Given an array of integers nums sorted in non-decreasing order, find the starting and ending position of a given target value.
// If target is not found in the array, return [-1, -1].
// You must write an algorithm with O(log n) runtime complexity.

#include <iostream>
using namespace std;

int firstOccurance(int arr[], int size, int target)
{
    int start = 0, end = size - 1, fisrt = -1, mid;

    // find first occirence
    while (start <= end)
    {
        // find mid
        mid = start + (end - start) / 2;

        // if found
        if (arr[mid] == target)
        {
            fisrt = mid;
            // then check for left for target
            end = mid - 1;
        }
        else if (arr[mid] < target)
            start = mid + 1;
        else
            end = mid - 1;
    }
    return fisrt;
}

int lastOccurance(int arr[], int size, int target)
{
    int start = 0, end = size - 1, last = -1, mid;

    // find last occurance
    while (start <= end)
    {
        // find mid
        mid = start + (end - start) / 2;
        // if target is found
        if (arr[mid] == target)
        {
            last = mid;
            // please check in right for target
            start = mid + 1;
        }
        else if (arr[mid] > target)
            end = mid - 1;
        else
            start = mid + 1;
    }

    return last;
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
    int first = firstOccurance(arr, n, key);
    int last = lastOccurance(arr, n, key);

    cout << "Fisrt Occurance : " << first << endl
         << "Last Occurance : " << last << endl;

    return 0;
}