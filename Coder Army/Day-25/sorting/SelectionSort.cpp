#include <iostream>
using namespace std;
int main()
{
    int n = 6;
    int arr[n] = {67, 34, 23, 45, 2, 34};

    // impliment a selection sort
    for (int i = 0; i < n; i++)
    {
        int index = i;
        // select smallest number from i to n-1
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[index])
                index = j;
        }
        swap(arr[i], arr[index]);
    }

    // final sorted array
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";

    return 0;
}
