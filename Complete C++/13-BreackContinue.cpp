#include <iostream>
using namespace std;

int main()
{

    for (int i = 1;; i++)
    {
        cout << i << " ";
        if (i != 10)
            continue;
        break;
    }

    return 0;
}
