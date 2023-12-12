#include <iostream>
using namespace std;
// 3: Find the index of a specific element in an array, if the element is nor present, print -1. Ask the size of the array from the user and then implement it.

int findElement(int arr[], int element, int sizeOfarray)
{
    for (int i = 0; i < sizeOfarray; i++)
    {
        if (arr[i] == element)
        {
            return 0;
        }
    }
    return -1;
}

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    // ask size of array
    int sizeOfarray;
    cin >> sizeOfarray;

    // take element
    int arr[sizeOfarray] = {0};
    for (int i = 0; i < sizeOfarray; i++)
    {
        cin >> arr[i];
    }

    // find element
    int element;
    cin >> element;

    int result = findElement(arr, element, sizeOfarray);

    if (result == -1)
    {
        cout << "Not Found!";
    }
    else
    {
        cout << "Found!";
    }

    return true;
}
