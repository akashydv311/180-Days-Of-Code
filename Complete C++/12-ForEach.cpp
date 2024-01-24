#include <iostream>
using namespace std;

int main()
{
    int arr[] = {32, 34, 45, 23, 45, 23, 34, 4, 7, 8, 45, 7};

    for (int element : arr)
    {
        cout << element << " ";
    }

    return 0;
}
