#include<iostream>
using namespace std;

int main()
{
    // Multiline comments
    /*
    Data Type
    int, double, char, string, bool
    */

    // Declare single variable
    int myNum;
    myNum = 90;
    cout<<"My Number is: "<<myNum<<endl;

    // Declare multiple variable
    int a = 90, b = 78, c = 78;
    cout<<"Values of a="<<a<<" b="<<b<<" c="<<c<<endl;

    int x, y ,z;
    x = y = z = 56;
    cout<<"Values of x="<<x<<" y="<<y<<" z="<<z<<endl;

    // Variable are called identifiers

    /* Rules for identifiers is
    The general rules for naming variables are:

    Names can contain letters, digits and underscores
    Names must begin with a letter or an underscore (_)
    Names are case sensitive (myVar and myvar are different variables)
    Names cannot contain whitespaces or special characters like !, #, %, etc.
    Reserved words (like C++ keywords, such as int) cannot be used as names

    */

    int mintPerHour = 60;
    string _employeeName = "Jones Snow";
    int empId1 = 890;


    // Constant Variable

    /*
    When you do not want others (or yourself) to change existing variable values,
    use the const keyword (this will declare the variable as "constant", which means
    unchangeable and read-only
    */

    const int adhaarNumber = 122362;
    //adhaarNumber = 8966; ERROR

    const int minutesPerHour = 60;
    const float PI = 3.14;

    return 0;
}
