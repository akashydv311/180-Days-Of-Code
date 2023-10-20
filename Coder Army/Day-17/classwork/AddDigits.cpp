#include <iostream>
using namespace std;
/*
Given an integer num, repeatedly add all its digits until the result has only one digit, and return it.
*/
int addDigits(int);

int main()
{
    int oneDigSum = addDigits(6723);
    cout << oneDigSum;
}

int addDigits(int num)
{

    while (num > 9)
    {
        int rem, ans = 0;

        while (num != 0)
        {
            rem = num % 10;
            num = num / 10;
            ans = ans + rem;
        }

        num = ans;
    }
    return num;
}