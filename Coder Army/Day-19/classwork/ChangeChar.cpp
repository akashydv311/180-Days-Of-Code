#include <iostream>
using namespace std;

// fisrt logic
void chnageChar01(char &ch)
{
    // cout << char(int('D') + 26 + int('a') - int('Z') - 1) << endl;
    if (ch >= 'A' && ch <= 'z')
    {
        if (ch < 'a')
        {
            ch = ch + 25 + (int('a') - int('Z'));
        }
        else
        {
            ch = ch - 25 + (int('Z') - int('a'));
        }
    }
    else
    {
        cout << "Please enter character only" << endl;
    }
}

// second logic
void chnageChar02(char &ch)
{

    if ('A' <= 'z')
    {
        // chnage 'a' -> 'A'
        if (ch >= 'a' && ch <= 'z')
            ch = ch - 'a' + 'A';
        // chnage 'A' -> 'a'
        else if (ch >= 'A' && ch <= 'Z')
            ch = ch - 'A' + 'a';
    }
    else
    {
        cout << "Please enter chnageter only" << endl;
    }
}

int main()
{
    char ch;
    cout << "Enter charater: ";
    cin >> ch;
    cout << "Initial character: " << ch << endl;
    chnageChar02(ch);
    cout << "After character: " << ch << endl;
    return true;
}
