#include <iostream>
using namespace std;

// Print n’th Fibonacci number
int main()
{
    int n = 14;
    int firstTerm = 0;
    int secondTerm = 1;
    int nextTerm;
    double sumOfFibo = firstTerm + secondTerm;

    cout << firstTerm << ", " << secondTerm << ", ";
    for (int i = 3; i <= n; i++)
    {
        nextTerm = firstTerm + secondTerm;
        cout << nextTerm << ", ";
        // genrate next term
        firstTerm = secondTerm;
        secondTerm = nextTerm;
        // genrate sum of n'th term
        sumOfFibo += nextTerm;
    }
    cout << endl
         << "Sum of n'th fibonassi : " << sumOfFibo << endl;

    return true;
}