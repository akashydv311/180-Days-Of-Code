// Take a number n from the user and print all the even numbers between 1 and n(inclusive). Do this using while and do while loop separately.
#include <iostream>
using namespace std;
int main()
{
    int n;
    // taking input
    cout << "Enter number:";
    cin >> n;
    // using while loop
    while (n > 0)
    {
        if (n % 2 == 0)
        {
            cout << n << " ";
        }
        n--;
    }
    cout << endl
         << "While loop End!" << endl;
    // using do while loop
    cout << "do-while loop started!" << endl;
    cout << "Enter number:";
    cin >> n;
    do
    {
        if (n % 2 == 0)
            cout << n << " ";
        n--;
    } while (n > 0);

    return true;
}
