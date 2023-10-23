
#include <iostream>
using namespace std;

void swap1(int x, int y)
{
    int z = x;
    x = y;
    y = z;
}

void swap2(int &x, int &y)
{
    int z = x;
    x = y;
    y = z;
}

int main()
{
    int x, y;
    cout << "Enter 2 number for swap: ";
    cin >> x >> y;
    // pass by value
    swap(x, y);
    cout << "Pass by value: " << x << " " << y << endl;
    // pass by refrence
    swap(x, y);
    cout << "Pass by refrence: " << x << " " << y << endl;
    return true;
}
