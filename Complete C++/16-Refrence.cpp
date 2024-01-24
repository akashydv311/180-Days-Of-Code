#include <iostream>
using namespace std;

int main()
{
    int x = 90;

    cout << "Value - " << x << "\nAddress - " << &x;
    cout << endl;

    // refrence

    string name = "Morment";
    string &ref = name;

    cout << "value - " << name << endl;
    cout << "Value - " << ref << endl;
    cout << "Address of name " << &name << endl;
    cout << "Address of ref " << &ref << endl;
    // cout << "Actual address of ref " << &&ref << endl;

    return 0;
}