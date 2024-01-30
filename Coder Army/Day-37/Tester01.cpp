
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> v(2);

    v.push_back(78);
    v.push_back(67);
    v.push_back(56);
    v.push_back(67);

    cout << v.size();

    return 0;
}