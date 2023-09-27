#include <iostream>
using namespace std;
/*
        A
      B B
    C C C
  D D D D
E E E E E
*/
int main()
{
    int n = 5;
    char ch = 'A';
    for (int i = 1; i <= n; i++)
    {
        for (int j = n; j >= 1; j--)
        {
            if (j <= i)
                cout << ch << " ";
            else
                cout << "  ";
        }
        ch++;
        cout << endl;
    }
    return true;
}
