#include <iostream>
#include <cmath>

using namespace std;

class Triangle
{
private:
    double side1, side2, side3;

public:
    Triangle(double s1, double s2, double s3) : side1(s1), side2(s2), side3(s3) {}

    double getPerimeter() const
    {
        return side1 + side2 + side3;
    }

    double getArea() const
    {
        double s = getPerimeter() / 2.0;
        return sqrt(s * (s - side1) * (s - side2) * (s - side3));
    }
};

int main()
{
    double side1 = 3, side2 = 4, side3 = 5;

    Triangle triangle(side1, side2, side3);

    cout << "Perimeter of the triangle: " << triangle.getPerimeter() << " units" << endl;
    cout << "Area of the triangle: " << triangle.getArea() << " square units" << endl;

    return 0;
}
