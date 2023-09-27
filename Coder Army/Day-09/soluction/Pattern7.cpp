#include <iostream>
using namespace std;
/*
10
10 11
10 11 12
10 11 12 13
10 11 12 13 14
10 11 12 13 14 15
*/
int main()
{
    int startPoint = 10;
    int n = 6;
    for (int i = 10; i < (n + startPoint); i++)
    {
        for (int j = 10; j <= i; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }
    return true;
}