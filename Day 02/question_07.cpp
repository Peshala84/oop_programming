#include <iostream>

using namespace std;

int main()
{

    float celsius, fahrenheit;
    cout << "Enter temperature in Centigrade: ";
    cin >> celsius;

    fahrenheit = (celsius * 9 / 5) + 32;

    cout << "Temperature in Fahrenheit: " << fahrenheit << " F\n";

    float celsius1, fahrenheit1;
    cout << "Enter temperature in Fahrenheit: ";
    cin >> fahrenheit1;

    celsius1 = (fahrenheit1 - 32) * 5 / 9;

    cout << "Temperature in Centigrade: " << celsius1 << " C\n";

    return 0;
}
