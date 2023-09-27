#include <iostream>
using namespace std;
/*
A B C D
A B C
A B
A
*/
int main()
{
    int n = 4;
    char ch;
    for (int i = 1; i <= n; i++)
    {
        ch = 'A';
        for (int j = n; j >= i; j--)
        {
            cout << ch++ << " ";
        }
        cout << endl;
    }
    return true;
}