
/*
An array arr is a mountain if the following properties hold:

arr.length >= 3
There exists some i with 0 < i < arr.length - 1 such that:
arr[0] < arr[1] < ... < arr[i - 1] < arr[i]
arr[i] > arr[i + 1] > ... > arr[arr.length - 1]
Given a mountain array arr, return the index i such that arr[0] < arr[1] < ... < arr[i - 1] < arr[i] > arr[i + 1] > ... > arr[arr.length - 1].

You must solve it in O(log(arr.length)) time complexity.
*/

#include <iostream>
using namespace std;

int peakIndexInMountainArray(int arr[], int n)
{
    int start = 0, end = n - 1, mid;

    // binary search terminaction condition
    while (start <= end)
    {
        // find mid
        mid = end + (start - end) / 2;

        // if mid is grater then mid-1 && smaller then mid+1
        if (arr[mid] > arr[mid - 1] && arr[mid] > arr[mid + 1])
            return mid;
        // if mid is grater then mid-1
        else if (arr[mid] > arr[mid - 1])
            start = mid + 1;
        // if mid is less then mid-1
        else
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

    // binary search find the mounted element in array
    int mountElement = peakIndexInMountainArray(arr, n);

    cout << "Mount element index : " << mountElement << endl;

    return 0;
}