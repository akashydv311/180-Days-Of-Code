#include <iostream>
using namespace std;

int main()
{
    string cars[5] = {"Volvo", "BMW", "Ford", "Mazda", "Tesla"};
    int lenCars = sizeof(cars) / sizeof(cars[0]);

    for (int i = 0; i < lenCars;)
    {
        cout << ++i << " - " << cars[i] << endl;
    }

    return 0;
}