#include <iostream>
using namespace std;
bool isUgly(int);
int main()
{
    bool ans = isUgly(30);
    cout << boolalpha << ans;
    return true;
}

bool isUgly(int n)
{
    if (n < 1)
    {
        return false;
    }
    while (n != 1)
    {
        if (n % 2 == 0)
        {
            n /= 2;
        }
        else if (n % 3 == 0)
        {
            n /= 3;
        }
        else if (n % 5 == 0)
        {
            n /= 5;
        }
        else
        {
            break;
        }
    }
    if (n == 1)
    {
        return true;
    }
    else
    {
        return false;
    }
}