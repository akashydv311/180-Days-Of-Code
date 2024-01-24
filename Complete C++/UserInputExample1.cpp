#include <iostream>
using namespace std;

int main()
{
    // Creating a simple calculator
    int x, y;
    int ans;

    cout<<"Enter a first number: ";
    cin>>x;
    cout<<"Enter a second number: ";
    cin>>y;
    ans = x + y;
    cout<<"Sum of "<<x<<" and "<<y<<" is: "<<ans<<endl;

    return 0;
}
