
#include <iostream>
using namespace std;

// There is an Arithmetic Progression, First number is 220 and Common Difference is 7. So print all the numbers from 220 to 730 which follow the AP
int main()
{
    int firstNumber = 220;
    int commanDiffrence = 7;
    int lastNumbber = 730;

    for (int result = firstNumber; result <= lastNumbber; result += commanDiffrence)
    {
        cout << result << " ";
    }
    return true;
}