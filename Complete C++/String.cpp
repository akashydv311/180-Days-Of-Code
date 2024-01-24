#include <iostream>
#include <string>
using namespace std;

int main()
{
    // String Concatenation

    string firstName = "Jones";
    string lastName = "Snow!";
    string fullName = firstName+ " " +lastName;
    cout<<firstName<<" and "<<lastName<<endl;
    cout<<fullName<<endl;

    // ---------------------------------------


    // Append ( it adds the string in it )
    firstName = "Virat";
    lastName = "Kolhi";
    string fullName1 = firstName.append("+").append(lastName);
    cout<<fullName1<<endl;
    cout<<firstName<<" and "<<lastName<<endl;


    // --------------------------------------

    // Number with string
    int num1 = 10;
    string num2 = "30";
    //string finalNum = num1+num2; // ERROR

    // --------------------------------------------

    // String Length
    string text = "ahdhkhakshdkskahdioaueoweq";
    int l1 = text.length();
    int l2 = text.size();
    cout<<"length : "<<l1 <<" size: "<<l2<<endl;

    /*
    You might see some C++ programs that use the size() function to get the length of a string.
    This is just an alias of length(). It is completely up to you if you want to use length() or
    size()
    */

    // -----------------------------------------

    // Access Strings

    string myStr = "Infosys";
    cout<<myStr[0]<<myStr[3]<<endl;
    myStr[0] = 'i';
    cout<<myStr<<endl;


    // ---------------------------------------------

    // Special Characters

    string sent1 = "We are so called \"Vikings\" from the north";
    cout<<sent1<<endl;
    string sent2 = "Rangnar \'Lothbrook\' the king of north";
    cout<<sent2<<endl;

    // -----------------------------------------------

    // User input string
    /*
    However, cin considers a space (whitespace, tabs, etc) as a terminating character,
    which means that it can only store a single word (even if you type many words)
    */
    string typeName;
    cout<<"Enter a full Name: ";
    cin>>typeName;
    cout<<typeName<<endl;

    // sol this issue

    string typeFullName;
    cout<<"Type Full Name: ";
    getline(cin , typeFullName);
    getline(cin, typeFullName);
    cout<<typeFullName<<endl;

    return 0;
}
