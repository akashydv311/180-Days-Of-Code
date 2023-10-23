#include <iostream>
using namespace std;

void Swap(int &x, int &y)
{
    int z = x;
    x = y;
    y = z;
}
void Swap(float x, float y)
{
    float z = x;
    x = y;
    y = x;
}

void Swap(float x, int y)
{
    float z = x;
    x = y;
    y = x;
}
void Swap(int x, float y)
{
    float z = x;
    x = y;
    y = x;
}

int main()
{
    // fun overloding can be done
    // diffrent in number of perameters
    // diffrence in type of perameter
    // diffrence in position of peramerter

    int x = 89, y = 78;
    cout << "Initial -> " << x << " " << y << endl;
    Swap(x, y);
    cout << "After -> " << x << " " << y << endl;
    return true;
}
