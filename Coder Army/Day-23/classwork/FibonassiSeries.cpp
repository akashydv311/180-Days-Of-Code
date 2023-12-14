#include <iostream>
using namespace std;
int main()
{
    // input.txt output.txt create
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    //
    int n;
    cin >> n;

    // fibonassi series
    int arr[1000];

    // fix element
    arr[0] = 0;
    arr[1] = 1;

    for (int i = 2; i <= index; i++)
        arr[i] = arr[i - 1] + arr[i - 2];

    // find nth fibonassi
    cout << arr[index];

    return 0;
}
