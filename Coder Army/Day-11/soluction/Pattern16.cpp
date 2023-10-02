
//         *
//        *  *
//      *  *  *
//    *  *  *  *
//  *  *  *  *  *
//  *  *  *  *  *
//   *  *  *  *
//     *  *  *
//       *  *
//        *

#include <iostream>
using namespace std;
int main()
{
    int n = 5;

    // upper
    // row
    for (int i = 1; i <= n; i++)
    {
        // space
        for (int j = 1; j <= n - i; j++)
        {
            cout << " ";
        }
        // start
        for (int j = 1; j <= i; j++)
        {
            cout << "* ";
        }
        // new line
        cout << endl;
    }

    // lower
    // row
    for (int i = n - 1; i >= 1; i--)
    {
        // space
        for (int j = 1; j <= n - i; j++)
        {
            cout << " ";
        }
        // start
        for (int j = i; j >= 1; j--)
        {
            cout << "* ";
        }
        // new line
        cout << endl;
    }
    return true;
}
