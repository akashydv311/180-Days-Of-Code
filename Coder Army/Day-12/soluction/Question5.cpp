// What will be the result below according to the precedence table.
// 2*3-48 == 5/4*6 =>> ( 6-48 == 1*6) = (42 == 6) = false 0
// 6<<2-4*8/2      =>> ( )
// 5>4<3/2-8%4+5   =>> ( 1 / 2 - 0 + 5) = ( 0 - 0 + 5) = 5 true 1
// 14-8+92>>2+70   =>> ( )

#include <iostream>
using namespace std;
int main()
{
    int result;

    result = 2 * 3 - 48 == 5 / 4 * 6;
    cout << result << endl;

    result = 6 << 2 - 4 * 8 / 2;
    cout << result << endl;

    result = 5 > 4 < 3 / 2 - 8 % 4 + 5;
    cout << result << endl;

    result = 14 - 8 + 92 >> 2 + 70;
    cout << result << endl;

    return true;
}
