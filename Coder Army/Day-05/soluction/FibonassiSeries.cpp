#include <iostream>
using namespace std;

// genrate finonasi series
int main()
{
    int numberOfTerms = 10;
    int first = 0;
    int second = 1;
    int next;

    // printing first and second terms
    cout << first << ", " << second << ", ";
    for (int i = 3; i <= numberOfTerms; i++)
    {
        next = first + second;
        cout << next << ", ";
        // genrate next term
        first = second;
        second = next;
    }
    return true;
}