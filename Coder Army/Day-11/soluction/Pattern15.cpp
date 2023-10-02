
//             A
//           A B A
//        A B C B A
//     A B C D C B A
//  A B C D E D C B A
#include <iostream>
using namespace std;
int main()
{
    int n = 5;
    char ch;
    // row
    for (int i = 1; i <= n; i++)
    {
        // space
        for (int j = 1; j <= n - i; j++)
        {
            cout << "  ";
        }
        ch = 'A' - 1;
        // print pattern 1
        for (int j = 1; j <= i; j++)
        {
            cout << ++ch << " ";
        }
        for (int j = 2; j <= i; j++)
        {
            cout << --ch << " ";
        }
        // new line
        cout << endl;
    }
    return true;
}
