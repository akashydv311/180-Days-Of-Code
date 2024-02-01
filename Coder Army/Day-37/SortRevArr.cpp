
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int arr[] = {23, 34, 45, 56, 23, 1};

    int arraySize = sizeof(arr) / sizeof(arr[0]);

    // sort arr
    sort(arr, arr + arraySize);

    for (int i = 0; i < arraySize; i++)
        cout << arr[i] << " ";

    return 0;
}

// #include <iostream>
// #include <algorithm>

// int main()
// {
//     // Create an array
//     int myArray[] = {10, 5, 8, 2, 7};

//     // Calculate the number of elements in the array
//     int arraySize = sizeof(myArray) / sizeof(myArray[0]);

//     // Sort the array using std::sort
//     std::sort(myArray, myArray + arraySize);

//     // Print the sorted array
//     std::cout << "Sorted Array: ";
//     for (int i = 0; i < arraySize; ++i)
//     {
//         std::cout << myArray[i] << " ";
//     }
//     std::cout << std::endl;

//     return 0;
// }
