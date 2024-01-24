#include <iostream>
using namespace std;

int main()
{
    char choice;
    int table = 1, i = 0;

    do
    {
        table++;
        i = 1;
        while (i != 11)
        {
            cout << table * i << " ";
            i++;
        }
        cout << endl;
        cout << "Do you want more tables? (y/n) ";
        cin >> choice;
    } while (choice != 'n');

    cout << "Thank you!";

    return 0;
}
