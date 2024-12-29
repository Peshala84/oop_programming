#include <iostream>

class Temperature
{
private:
    double celsius;

public:
    Temperature(double celsius) : celsius(celsius) {}

    operator double() const
    {
        return (celsius * 9 / 5) + 32;
    }

    double getCelsius() const
    {
        return celsius;
    }

    double getFahrenheit() const
    {
        return static_cast<double>(*this);
    }
};

int main()
{
    Temperature tempCelsius(25.0);

    std::cout << "Original Temperature in Celsius: " << tempCelsius.getCelsius() << std::endl;
    std::cout << "Converted Temperature in Fahrenheit: " << tempCelsius.getFahrenheit() << std::endl;

    return 0;
}
