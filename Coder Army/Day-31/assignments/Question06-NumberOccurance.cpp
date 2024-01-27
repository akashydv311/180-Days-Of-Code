
/*
Given a sorted array Arr of size N and a number X,
you need to find the number of occurrences of X in Arr.
*/
#include <iostream>
using namespace std;

int count(int arr[], int n, int x)
{
    // code here
    int start = 0, end = n - 1, mid, first = -1, last = -1;

    // binary search terminaction
    // FOR - FIRST

    while (start <= end)
    {
        // find mid
        mid = start + (end - start) / 2;

        // if found x
        if (arr[mid] == x)
        {
            first = mid;
            // check left side for more x
            end = mid - 1;
        }
        else if (arr[mid] < x)
            start = mid + 1;
        else
            end = mid - 1;
    }

    // FOR - LAST
    // reset the start and end
    start = 0, end = n - 1;
    while (start <= end)
    {
        // find mid
        mid = start + (end - start) / 2;

        // if found x
        if (arr[mid] == x)
        {
            last = mid;
            // check right side for more x
            start = mid + 1;
        }
        else if (arr[mid] < x)
            start = mid + 1;
        else
            end = mid - 1;
    }
    if (first && last == -1)
        return 0;
    // cout << first << " " << last << endl;
    int ans = (last - first) + 1;
    return ans;
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
    int occurence = count(arr, n, key);

    cout << "Occurance : " << occurence << endl;

    return 0;
}