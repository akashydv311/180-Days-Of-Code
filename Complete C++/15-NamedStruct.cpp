#include <iostream>
using namespace std;

// Named Structures
struct pet
{
    string name;
    int age;
};

int main()
{
    pet dog1;

    dog1.name = "Robbin";
    dog1.age = 5;

    pet dog2;

    dog2.name = "Rubble";
    dog2.age = 3;

    // print

    cout << "Dog 1 = \n"
         << "name: " << dog1.name << "\n"
         << "age: " << dog1.age << endl;

    cout << endl;

    cout << "Dog 2 = \n"
         << "name: " << dog2.name << "\n"
         << "age: " << dog2.age << endl;

    return 0;
}