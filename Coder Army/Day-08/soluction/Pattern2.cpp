#include <iostream>
using namespace std;
/*
1 4 9 16 25
1 4 9 16 25
1 4 9 16 25
1 4 9 16 25
1 4 9 16 25
1 4 9 16 25
*/
int main()
{
    int inc;
    for (int i = 1; i <= 5; i++)
    {
        inc = 1;
        for (int j = 1; j <= 5; j++)
        {
            cout << inc * j << " ";
            inc++;
        }
        cout << endl;
    }
    return true;
}