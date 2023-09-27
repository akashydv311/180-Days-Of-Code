#include <iostream>
using namespace std;

// Print Sum of cube of first n natural number
int main()
{
    int num = 3;
    double ans = 0;

    for (int i = 1; i <= num; i++)
    {
        ans += (i * i * i);
    }
    cout << "Sum of cube of " << num << " = " << ans << endl;
    return true;
}