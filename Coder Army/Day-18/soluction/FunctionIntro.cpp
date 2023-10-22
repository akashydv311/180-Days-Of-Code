
#include <iostream>
using namespace std;

bool isPrime(int n)
{
    // negative number cannot be a prime number.
    if (n < 0)
    {
        return false;
    }
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}

int factorial(int n)
{

    if (isPrime(n))
    {
        int fact = 1;
        for (int i = 2; i <= n; i++)
        {
            fact *= i;
        }
        return fact;
    }
    return -1;
}

// default perameters
int add(int num1, int num2 = 0)
{
    return num1 + num2;
}

int main()
{
    // if number is prime then calculate it's factorial otherwise return -1
    int result = factorial(-5);
    if (result != -1)
    {
        cout << "Result is: " << result << endl;
    }
    else
    {
        cout << " Given Number is not a prime number so Result is: " << result << endl;
    }
    cout << "Addition of two number is: " << add(45) << endl;
    return true;
}
