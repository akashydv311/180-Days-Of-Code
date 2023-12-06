#include <iostream>
using namespace std;

int solve1(int, int);
int solve2(int, int);

int main()
{
    int A = 3, B = 4;
    int totalMoves = 0;
    cout << solve1(A, B) << endl;
    cout << solve2(A, B) << endl;
    return true;
}

// second way
int solve2(int A, int B)
{
    int count = 0;

    count += min((8 - A), (8 - B));
    count += min((A - 1), (8 - B));
    count += min((8 - A), (B - 1));
    count += min((A - 1), (B - 1));

    return count;
}

// first way
/**
 * @input A : Integer
 * @input B : Integer
 *
 * @Output Integer
 */
int solve1(int A, int B)
{
    // row = 8, colum = 8
    int totalMoves = 0;
    int x = 0, y = 0;

    int firstMove = 0;
    x = (8 - A);
    y = (8 - B);
    if (x < y)
    {
        firstMove = x;
    }
    else
    {
        firstMove = y;
    }

    int secondtMove = 0;
    x = (8 - A);
    y = (B - 1);
    if (x < y)
    {
        secondtMove = x;
    }
    else
    {
        secondtMove = y;
    }

    int thridtMove = 0;
    x = (A - 1);
    y = (B - 1);
    if (x < y)
    {
        thridtMove = x;
    }
    else
    {
        thridtMove = y;
    }

    int fourthMove = 0;
    x = (A - 1);
    y = (8 - B);
    if (x < y)
    {
        fourthMove = x;
    }
    else
    {
        fourthMove = y;
    }

    return firstMove + secondtMove + thridtMove + fourthMove;
}
