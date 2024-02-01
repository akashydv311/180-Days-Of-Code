#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<int> v = {34, 12, 56, 3, 89};

    // sorting vector accending order

    sort(v.begin(), v.end());

    for (auto p = v.begin(); p != v.end(); p++)
        cout << *p << " ";

    cout << endl;

    // sorting vector desanding order

    sort(v.begin(), v.end(), greater<int>());

    for (auto p = v.begin(); p != v.end(); p++)
        cout << *p << " ";

    // reverse vector

    reverse(v.begin(), v.end());
    cout << endl;
    for (auto p = v.begin(); p != v.end(); p++)
        cout << *p << " ";

    reverse(v.begin(), v.end());
    cout << endl;
    for (auto p = v.begin(); p != v.end(); p++)
        cout << *p << " ";

    return 0;
}