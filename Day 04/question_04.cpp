#include <iostream>
#include <cmath>

class Triangle
{
private:
    double side1, side2, side3;

public:
    Triangle(double s1, double s2, double s3) : side1(s1), side2(s2), side3(s3) {}

    double calculatePerimeter()
    {
        return side1 + side2 + side3;
    }

    double calculateArea()
    {
        double s = calculatePerimeter() / 2;
        return sqrt(s * (s - side1) * (s - side2) * (s - side3));
    }

    void printDetails()
    {
        std::cout << "Triangle with sides: " << side1 << ", " << side2 << ", " << side3 << std::endl;
        std::cout << "Perimeter: " << calculatePerimeter() << std::endl;
        std::cout << "Area: " << calculateArea() << std::endl;
    }
};

int main()
{
    Triangle triangle(3, 4, 5);
    triangle.printDetails();
    return 0;
}
