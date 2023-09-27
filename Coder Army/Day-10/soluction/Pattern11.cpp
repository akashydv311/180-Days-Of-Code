#include <iostream>
using namespace std;
/*
        5
      5 4
    5 4 3
  5 4 3 2
5 4 3 2 1
*/
int main()
{
    int n = 5;
    int num;
    for (int i = n; i >= 1; i--)
    {
        num = 5;
        for (int j = 1; j <= n; j++)
        {
            if (j >= i)
                cout << num-- << " ";
            else
                cout << "  ";
        }
        cout << endl;
    }
    return true;
}
