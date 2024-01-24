#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int num1 = 90, num2 = 67;
    cout<< min(num1, num2)<<endl;
    cout<< max(num1, num2)<<endl;

    // sqrt, round, log - for this we have to include <cmath> lib
    cout<< sqrt(64)<<endl;
    cout<< round(34.89)<<" " << round(89.4)<<endl;
    cout<< log(8)<<endl;

    return 0;
}
