#include <iostream>
using namespace std;

int main()
{
    // Data Type
    int num = 89;
    float persentage = 34.89;
    double weight = 67.5;
    string name = "Jon";
    char gender = 'M';
    bool isAns = true;

    /*
    boolean - 1 byte
    char - 1 byte
    int - 4 byte
    float - 4 byte
    double - 8 byte

    float vs. double

    The precision of a floating point value indicates how many digits the value can have
    after the decimal point. The precision of float is only six or seven decimal digits, while
    double variables have a precision of about 15 digits. Therefore it is safer to use double
    for most calculations.

    */
    float ans1 = 10E2;
    double ans2 = 10e2;
    cout<<ans1<<" "<<ans2<<endl;

    // Character Data Type
    char alpha1 = 65;
    cout<<alpha1<<endl;

    // String Types
    string greetings = "Hello ";

    return 0;
}
