
/*
Given an array arr of positive integers sorted in a strictly increasing order, and an integer k.
Return the kth positive integer that is missing from this array.
*/

#include <iostream>
using namespace std;

int missingKthPositiveNumber(int arr[], int n, int target)
{
    return -1;
}

int main()
{
    int x, arr[1000], key, n;

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
    int index = missingKthPositiveNumber(arr, n, key);

    cout << "Missing first positive : " << index << endl;

    return 0;
}