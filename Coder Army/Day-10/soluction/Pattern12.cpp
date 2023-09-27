#include <iostream>
using namespace std;
/*
        E
      E D
    E D C
  E D C B
E D C B A
*/
int main()
{
    char ch;
    int n = 5;

    for (int i = n; i >= 1; i--)
    {
        ch = 'E';
        for (int j = 1; j <= n; j++)
        {
            if (j >= i)
                cout << ch-- << " ";
            else
                cout << "  ";
        }
        cout << endl;
    }
    return true;
}