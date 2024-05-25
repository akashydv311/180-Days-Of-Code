
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<int> v;

    v.push_back(78);
    v.push_back(67);
    v.push_back(56);
    v.push_back(67);

    cout << v.size();
    cout << endl;

    cout << binary_search(v.begin(), v.end(), 67) << endl;

    return 0;
}