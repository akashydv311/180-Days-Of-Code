#include <iostream>
#include <vector>
using namespace std;

int main()
{

    vector<int> v;
    cout << "Size: " << v.size() << " Capacity: " << v.capacity() << endl;
    v.push_back(89);
    v.push_back(34);
    v.push_back(23);
    cout << "Size: " << v.size() << " Capacity: " << v.capacity() << endl;
    v.pop_back();
    cout << "Size: " << v.size() << " Capacity: " << v.capacity() << endl;

    //
    vector<int> v1(5, 89);

    // print data
    for (auto it = v1.begin(); it != v1.end(); it++)
        cout << *it << " ";

    // front back
    v1.push_back(67);
    cout << endl;
    for (auto it = v1.begin(); it != v1.end(); it++)
        cout << *it << " ";

    //
    vector<int> v2(3);

    // insert data
    cout << "Enter values: ";
    for (auto i = v2.begin(); i != v2.end(); i++)
        cin >> *i;

    cout << "Values is: " << endl;
    for (auto i = v2.begin(); i != v2.end(); i++)
        cout << *i << " ";

    cout << endl;
    cout << "Front: " << v2.front() << endl;
    cout << "Back: " << v2.back() << endl;

    cout << "Index 2: " << v2.at(2) << endl;

    // reverser loop

    for (auto p = v2.rbegin(); p != v2.rend(); p++)
        cout << *p << " ";

    // reverse loop
    for (auto p = v2.begin(); p != v2.end(); p++)
        cout << *p << " ";

    return 0;
}