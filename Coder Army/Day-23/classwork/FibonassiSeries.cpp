#include <iostream>
using namespace std;
int main()
{
    // input.txt output.txt create
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    // index number of fibonassi series
    int index;
    cin >> index;

    // fibonassi series
    int arr[index + 1] = {0};

    // fix element
    arr[0] = 0;
    arr[1] = 1;

    for (int i = 2; i <= index; i++)
    {
        arr[i] = arr[i - 1] + arr[i - 2];
    }

    // printing series
    for (int i = 0; i <= index; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
