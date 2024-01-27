
/*
Given an array of size N consisting of only 0's and 1's.
The array is sorted in such a manner that all the 1's are placed first and then
they are followed by all the 0's. Find the count of all the 0's.
*/

#include <iostream>
using namespace std;

int countZeros(int arr[], int n)
{
    // using binary search
    int start = 0, end = n - 1, mid, first = -1;

    while (start <= end)
    {
        // find mid
        mid = start + (end - start) / 2;

        // if found 0 at mid
        if (arr[mid] == 0)
        {
            first = mid;
            end = mid - 1;
        }
        else
            start = mid + 1;
    }
    // return number of zeros
    if (first == -1)
        return 0;
    return (n - first);
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
    int zeros = countZeros(arr, n);

    cout << "Number of Zeros : " << zeros << endl;

    return 0;
}