// 2: Bubble Sort Algorithm to sort the array of integers in increasing order by taking the smallest number to first place by starting from the last. Question was explained in the class.

#include <iostream>
using namespace std;
int main()
{
    int arr[1000];
    int n;
    cout << "Enter the size of array: ";
    cin >> n;
    // values in an array
    cout << "Enter values in an array: " << endl;
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    // implimenting bubble sort algo
    for (int i = 0; i < n; i++)
    {
        for (int j = n - 1; j > i; j--)
        {
            if (arr[j] < arr[j - 1])
                swap(arr[j - 1], arr[j]);
        }
    }
    // final sorted array
    cout << "Sorted array: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";

    return 0;
}
