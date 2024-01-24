#include <iostream>
using namespace std;

int main()
{
    int time = 23;

    if (time >= 6 && time <= 12)
        cout << "Good Morning";
    else if (time >= 12 && time <= 18)
        cout << "Good Evening";
    else
        cout << "Good night";

    return 0;
}
