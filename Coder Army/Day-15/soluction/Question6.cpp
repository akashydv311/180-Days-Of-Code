// Give a number n, find if it is prime or not, use a while loop and break here to solve it.
#include <iostream>
using namespace std;
int main()
{
    int num;
    bool count = false;
    // taking input
    cout << "Enter number: ";
    cin >> num;
    // prime
    int i = 2;
    while (i < num)
    {
        if (num % i == 0)
        {
            count = true;
        }
        i++;
    }
    if (num <= 0)
    {
        cout << "Number should be positive" << endl;
    }
    else if (num == 1)
    {
        cout << num << " is not a prime nigher composit";
    }
    else if (!count)
    {
        cout << "Prime";
    }
    else
    {
        cout << "Not Prime";
    }
    return true;
}
