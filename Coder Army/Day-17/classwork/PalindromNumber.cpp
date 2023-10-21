#include <climits>
#include <iostream>
using namespace std;
bool isPalindrome(int);
int main()
{
    bool ans = isPalindrome(121);
    cout << boolalpha << ans;
    return true;
}

bool isPalindrome(int x)
{
    if (x < 0)
    {
        return false;
    }
    int start = x;
    int end = 0, rem;
    // first reverse the int
    while (x != 0)
    {
        rem = x % 10;
        x /= 10;
        if (end > INT_MAX / 10)
        {
            return false;
        }
        end = end * 10 + rem;
    }
    if (start == end)
    {
        return true;
    }
    else
    {
        return false;
    }
}