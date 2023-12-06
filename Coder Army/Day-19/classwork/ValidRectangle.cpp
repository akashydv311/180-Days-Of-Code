#include <iostream>
using namespace std;
int main()
{
    // 1 1 2 2
    int a = 1, b = 1, c = 2, d = 2;
    // if both the length ans brith are equals then it's ratengle
    if ((a == b && c == d) || (a == d && b == c) || (a == c && b == d))
    {
        cout << "Valid Ractangle" << endl;
    }
    else
    {
        cout << "Invalid Ractangle" << endl;
    }
    return true;
}
