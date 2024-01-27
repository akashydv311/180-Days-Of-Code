
/*
Given a non-negative integer x, return the square root of x rounded down to the nearest integer.
The returned integer should be non-negative as well.
You must not use any built-in exponent function or operator.
For example, do not use pow(x, 0.5) in c++ or x ** 0.5 in python.
*/

int squareRootWithIf(int x)
{
    if (x < 2)
        return x;
    int start = 0, end = x, ans, mid;

    while (start <= end)
    {
        // find mid of x
        mid = start + (end - start) / 2;

        // if square of mid is equal to the x
        if (mid == x / mid)
            return mid;
        // if square of mid is grater then the x then move left
        else if (mid > x / mid)
            end = mid - 1;
        // if square of mid if less then the x then move right
        else
        {
            start = mid + 1;
            ans = mid;
        }
    }

    return ans;
}

int squareRoot(int x)
{
    int start = 1, end = x, ans = 0, mid;

    while (start <= end)
    {
        // find mid of x
        mid = start + (end - start) / 2;

        // if square of mid is equal to the x
        if (mid == x / mid)
            return mid;
        // if square of mid is grater then the x then move left
        else if (mid > x / mid)
            end = mid - 1;
        // if square of mid if less then the x then move right
        else
        {
            start = mid + 1;
            ans = mid;
        }
    }

    return ans;
}

#include <iostream>
using namespace std;

int main()
{
    int x;

    // Please create input.txt output.txt
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    // cout << "Enter the number to find square root: ";
    cin >> x;

    // binary search find the key index in array
    int ans = squareRoot(x);

    cout << "Square Root : " << ans << endl;

    return 0;
}