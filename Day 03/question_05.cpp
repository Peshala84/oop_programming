#include <iostream>

using namespace std;

class Car
{
public:
    string brand;
    string model;
    int year;
};

int main()
{

    Car mycar;

    mycar.brand = "Toyota";
    mycar.model = "Camry";
    mycar.year = 2023;
    cout << "Car Information" << endl;
    cout << "Brand: " << mycar.brand << endl;
    cout << "Model: " << mycar.model << endl;
    cout << "Year: " << mycar.year << endl;

    return 0;
}
