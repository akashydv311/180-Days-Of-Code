#include <iostream>
using namespace std;

struct
{
    string carName;
    string color;
    int price;
} car;

int main()
{
    car.color = "Red";
    car.price = 7896;
    car.carName = "Maruti Suzuki";

    cout << "Car Name - " << car.carName << endl;
    cout << "Car Color - " << car.color << endl;
    cout << "Car Price - " << car.price << endl;

    return 0;
}
