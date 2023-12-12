
#include <iostream>

int main()
{
    const int size = 4;
    int arr[size] = {1, 2, 3, 4};
    int val;

    for (int i = 0, j = size - 1; i < size / 2; i++, j--)
    {
        val = arr[i];
        arr[i] = arr[j];
        arr[j] = val;
    }

    // Print the reversed array
    for (int i = 0; i < size; i++)
    {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}