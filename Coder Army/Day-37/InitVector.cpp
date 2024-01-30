
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
    cout << "Vectore 3 value: ";
    for (const int &i : vector3)
        cout
            << i << " ";

    return 0;
}