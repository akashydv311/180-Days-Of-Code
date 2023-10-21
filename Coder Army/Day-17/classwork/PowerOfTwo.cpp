
#include <iostream>
using namespace std;
bool isPowerOfTwo(int);
int main()
{
    bool ans = isPowerOfTwo(128);
    cout << boolalpha << ans; // boolalpha is used to print boolean value
    return true;
}

bool isPowerOfTwo(int n)
{
    if (n < 1)
        return false;
    while (n != 1)
    {
        if (n % 2 == 1)
        {
            return false;
        }
        n /= 2;
    }
    return true;
}