#include <iostream>
using namespace std;
/*
F G H I J K
F G H I J K
F G H I J K
F G H I J K
F G H I J K
*/
int main()
{
    for (int i = 0; i <= 6; i++)
    {
        for (char ch = 'F'; ch <= 'K'; ch++)
        {
            cout << char(ch) << " ";
        }
        cout << endl;
    }
    return true;
}