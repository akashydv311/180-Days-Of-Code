//          *
//        *  *
//      *  *  *
//    *  *  *  *
//  *  *  *  *  *
#include <iostream>
using namespace std;
int main()
{
    int n = 10;
    // for row
    for (int i = 1; i <= n; i++)
    {
        // for space
        for (int j = 1; j <= n - i; j++)
        {
            cout << " ";
        }
        // for start
        for (int k = 1; k <= i; k++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    return true;
}
