#include <iostream>
using namespace std;
/*
1 8 27 64 125 216
1 8 27 64 125 216
1 8 27 64 125 216
1 8 27 64 125 216
1 8 27 64 125 216
*/
int main()
{
    int printNum;
    for (int i = 1; i <= 6; i++)
    {
        printNum = 0;
        for (int j = 1; j <= 6; j++)
        {
            printNum = (j * j * j);
            cout << printNum << " ";
        }
        cout << endl;
    }
    return true;
}