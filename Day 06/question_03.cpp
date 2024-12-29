#include <iostream>

class Point
{
private:
    int x;
    int y;

public:
    Point(int x = 0, int y = 0) : x(x), y(y) {}

    Point operator+(const Point &other) const
    {
        return Point(x + other.x, y + other.y);
    }

    friend std::ostream &operator<<(std::ostream &os, const Point &point)
    {
        os << "(" << point.x << ", " << point.y << ")";
        return os;
    }
};

int main()
{
    Point p1(3, 4);
    Point p2(1, 2);

    Point sum = p1 + p2;
    std::cout << "Sum of points: " << sum << std::endl;

    return 0;
}
