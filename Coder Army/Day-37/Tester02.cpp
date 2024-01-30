
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    // taking size from user
    int n;
    cout << "Enter size: ";
    cin >> n;

    // creating arrays
    int arr[n];

    // creating vertor
    vector<int> v(n, 0);

    cout << "Enter a values in array: ";
    for (int i = 0; i < v.size(); i++)
        cin >> v[i];

    for (int i = 0; i < v.size(); i++)
        cout << v[i] << " ";

    return 0;
}