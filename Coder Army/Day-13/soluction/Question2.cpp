// Find the factorial of a number n using a while loop and do a while loop.

#include <iostream>
using namespace std;
int main()
{
    int n, fact = 1;
    // taking n
    cout << "Enter number:";
    cin >> n;
    // validate
    if (n > 0)
    {
        // while loop
        while (n > 0)
        {
            fact *= n--;
        }
        cout << "Factorial is: " << fact << endl;
        cout << "While loop End" << endl;
    }
    else
    {
        cout << "Number should be positive and no zero" << endl;
    }

    cout << "D0-While loop started" << endl;

    // taking n
    cout << "Enter number:";
    cin >> n;
    // validate
    if (n > 0)
    {
        fact = 1;
        do
        {
            fact = fact * n;
            n--;
        } while (n > 0);
        cout << "Factorial is: " << fact << endl;
    }
    else
    {
        cout << "Number should be positive and no zero" << endl;
    }

    return true;
}
