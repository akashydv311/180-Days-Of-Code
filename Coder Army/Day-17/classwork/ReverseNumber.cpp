
#include <iostream>
#include <climits>
using namespace std;

int reverse(int);

int main()
{
    int num = reverse(8976);
    cout << num;
    return true;
}

int reverse(int x)
{

    int rem, ans = 0;

    while (x != 0)
    {
        rem = x % 10;
        x /= 10;
        // case for handling the case of overflow
        if (ans > INT_MAX / 10 || ans < INT_MIN / 10)
        {
            return 0;
        }
        ans = ans * 10 + rem;
    }
    return ans;
}