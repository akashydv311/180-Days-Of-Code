#include <iostream>
using namespace std;

int TrailingZeros(int N)
{
    int count = 0;

    while (N >= 5)
    {
        count += N / 5;
        N /= 5;
    }
    return count;
}

int main()
{
    int n = 1500;
    int numberOfZeros = TrailingZeros(n);
    cout << numberOfZeros << endl;
    return true;
}
