#include <iostream>
using namespace std;
/*
A
A B
A B C
A B C D
A B C D E
*/

int main()
{
    int n = 5;
    char ch;
    for (int i = 1; i <= n; i++)
    {
        ch = 'A';
        for (int j = 1; j <= i; j++)
        {
            cout << ch++ << " ";
        }
        cout << endl;
    }
    return true;
}