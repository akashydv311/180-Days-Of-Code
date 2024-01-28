

#include <iostream>
using namespace std;

int findMin(int arr[], int n)
{
    int start = 0, end = n - 1, mid, ans = arr[0];
    // binary search condition
    while (start <= end)
    {
        // find mid
        mid = start + (end - start) / 2;

        // if mid is grater then arr[0] that menas left part is sorted then move right
        if (arr[0] <= arr[mid])
            start = mid + 1;
        // if mid is smaller then arr[0] that means right is osrted then move left
        else
        {
            ans = arr[mid];
            end = mid - 1;
        }
    }
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

    // binary search find the mounted element in array
    int minEle = findMin(arr, n);

    cout << "Minimun Element : " << minEle << endl;

    return 0;
}