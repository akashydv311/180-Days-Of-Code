// Even and Positive Number : Write a program that prints “YES” if a given number is both even and positive, otherwise it will print “NO”

#include <iostream>
using namespace std;
int main()
{
    int input;
    // taking input
    cout << "Enter number:";
    cin >> input;
    // validate
    if (input > 0 && input % 2 == 0)
    {
        cout << "Yes";
    }
    else
    {
        cout << "No";
    }

    return true;
}
