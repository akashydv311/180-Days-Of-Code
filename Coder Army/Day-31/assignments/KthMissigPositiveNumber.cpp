
/*
Given an array arr of positive integers sorted in a strictly increasing order, and an integer k.
Return the kth positive integer that is missing from this array.
*/

#include <iostream>
using namespace std;

int main()
{
    int x;

    // Please create input.txt output.txt
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    // cout << "Enter the number to find square root: ";
    cin >> x;

    // binary search find the key index in array
    int ans = squareRoot(x);

    cout << "Square Root : " << ans << endl;

    return 0;
}