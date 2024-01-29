

#include <iostream>
using namespace std;

int searchTarget(int nums[], int n, int target)
{
    int start = 0, end = n - 1, mid;

    while (start <= end)
    {
        mid = start + (end - start) / 2;

        // if target is mid
        if (nums[mid] == target)
            return mid;
        // left side array is sorted -> serach range(start to mid)
        else if (nums[0] <= nums[mid])
        {
            if (nums[start] <= target && nums[mid] >= target)
                end = mid - 1;
            else
                start = mid + 1;
        }
        // right side arrys is sorted -> search range(mid to end)
        else
        {
            if (nums[mid] <= target && nums[end] >= target)
                start = mid + 1;
            else
                end = mid - 1;
        }
    }

    return -1;
}

int main()
{
    int arr[100], n, target;

    // Please create input.txt output.txt
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    // cout << "Enter the size of array: ";
    cin >> n;

    // cout << "Enter values: " << endl;
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    // cout<< "Enter the key : "
    cin >> target;
    // binary search find the mounted element in array
    int findIndex = searchTarget(arr, n, target);

    cout << "Element found at : " << findIndex << endl;

    return 0;
}