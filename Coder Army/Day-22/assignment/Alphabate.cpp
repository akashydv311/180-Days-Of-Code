#include <iostream>
using namespace std;
// 4: Create an array of char types and store ‘a’ to ‘z’ in it. Then print the element of the arrays.
int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    // creating array
    char alphabate[26];
    int size = sizeof(alphabate) / sizeof(alphabate[0]);

    // taking input
    for (int i = 0; i < size; i++)
    {
        cin >> alphabate[i];
    }

    // print a to z
    for (int i = 0; i < size; i++)
    {
        cout << alphabate[i] << " ";
    }
    return true;
}
