
#include <iostream>
using namespace std;

// Print char from ‘A’ to ‘Z’ with the help of a for loop.
int main()
{

    // type cast char into int
    for (char ch = 'A'; ch <= 'Z'; ch++)
    {
        cout << char(ch) << " ";
    }
    return true;
}
