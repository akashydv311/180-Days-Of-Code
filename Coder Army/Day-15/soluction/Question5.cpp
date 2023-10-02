// Print all the Capital and small letters  using a while loop. It means A-Z, then a-z.
#include <iostream>
using namespace std;
int main()
{
    char ch = 'A';
    // using while loop
    while (ch <= 'Z')
    {
        cout << ch++ << " ";
    }
    cout << endl;
    // using do-while loop
    ch = 'a';
    do
    {
        cout << ch++ << " ";
    } while (ch <= 'z');

    return true;
}
