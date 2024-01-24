#include <iostream>
using namespace std;

struct
{
    double price;
    string modelNumber;
    string color;
    char warrienty;

} acer, dell, hp;

int main()
{

    // acer
    acer.modelNumber = "acer-178 swift";
    acer.price = 64829.86578345;
    acer.color = "Silver";
    acer.warrienty = 'y';

    // dell
    dell.modelNumber = "dell-vistro 456";
    dell.price = 6753.8664;
    dell.color = "black";
    dell.warrienty = 'n';

    // hp
    hp.modelNumber = "hp-thinkpad";
    hp.price = 686381.82362;
    hp.color = "Burgendy";
    hp.warrienty = 'y';

    // print

    cout << "Acer Model - " << acer.modelNumber << endl;
    cout << "Acer price - " << acer.price << endl;
    cout << endl;
    cout << "Hp Model - " << hp.modelNumber << endl;
    cout << "Hp price - " << hp.price << endl;
    cout << endl;
    cout << "Dell Model - " << dell.modelNumber << endl;
    cout << "Dell price - " << dell.price << endl;
    cout << endl;

    return 0;
}
