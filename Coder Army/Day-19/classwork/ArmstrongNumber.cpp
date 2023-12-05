#include <iostream>
#include <math.h>
using namespace std;

int coutNumberDig(int num)
{
    int count = 0;
    while (num != 0)
    {
        num /= 10;
        count++;
    }
    return count;
}

bool isArmstrong(int num, int count)
{

    int ans = 1, rem, temp = num;
    while (num)
    {
        rem = num % 10;
        num /= 10;
        ans = ans + pow(rem, count);
        // cout << ans << endl;
    }
    if (ans == temp)
        return true;
    return false;
}

int main()
{
    int num;
    cout << "Enter number: ";
    cin >> num;
    // cout number of
    int count = coutNumberDig(num);
    bool result = isArmstrong(num, count);
    // cout << count << endl;
    cout << num << " is armstrong number: " << boolalpha << result << endl;
    return true;
}
