
#include <iostream>
#include <vector>
using namespace std;
int main()
{

    // decleraction
    vector<int> vector1;

    // init
    vector<int> vector2 = {12, 23, 34, 45, 56};

    // init
    vector<int> vector3{34, 45, 56, 67, 78, 89};

    // print values
    cout << "Vector 3 value: ";
    for (const int &i : vector3)
        cout << i << " ";

    cout << "\n";
    // print
    cout << "Vector 2 value: ";
    for (int i = 0; i < vector2.size(); i++)
        cout << vector2.at(i) << " ";

    return 0;
}