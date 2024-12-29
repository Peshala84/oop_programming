#include <iostream>

class ShapeCalculator
{
public:
    static const double PI;

    static double calculateArea(double radius)
    {
        return PI * radius * radius;
    }

    static double calculateArea(double length, double width)
    {
        return length * width;
    }
};

const double ShapeCalculator::PI = 3.14159265358979323846;

int main()
{
    const double circleRadius = 5.0;
    const double rectangleLength = 4.0;
    const double rectangleWidth = 6.0;

    std::cout << "Area of the circle with radius " << circleRadius << ": "
              << ShapeCalculator::calculateArea(circleRadius) << std::endl;

    std::cout << "Area of the rectangle with length " << rectangleLength
              << " and width " << rectangleWidth << ": "
              << ShapeCalculator::calculateArea(rectangleLength, rectangleWidth) << std::endl;

    return 0;
}
