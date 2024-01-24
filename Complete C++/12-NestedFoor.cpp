#include <iostream>
using namespace std;

int main()
{
    int count = 0;
    for (int i = 'A'; i <= 'Z'; i++)
    {
        count++;
        for (int j = 0; j < count; j++)
        {
            cout << char(i) << " ";
        }
        cout << endl;
    }

    return 0;
}
