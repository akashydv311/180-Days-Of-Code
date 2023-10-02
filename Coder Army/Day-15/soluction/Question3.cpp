// Given a number n, print all the numbers from 1 to n(inclusive) which are not divisible by 3 and 5. (use Continue here).

#include <iostream>
using namespace std;
int main()
{
    int num;
    // taking input
    cout << "Enter number:";
    cin >> num;
    // validate
    while (num > 0)
    {
        if (num % 3 != 0 && num % 5 != 0)
        {
            cout << num-- << " ";
            continue;
        }
        num--;
    }

    return true;
}
