
#include <iostream>
using namespace std;
int isLeap(int);
int main()
{
    int result = isLeap(2023);
    cout << result;
    return true;
}

int isLeap(int N)
{
    // code here
    if (N % 400 == 0)
    {
        return 1;
    }
    else
    {
        if ((N % 100 != 0) && (N % 4 == 0))
        {
            return 1;
        }
        return 0;
    }
}