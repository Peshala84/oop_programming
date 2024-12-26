#include <iostream>

class Shape
{
protected:
    float width, height;

public:
    Shape(float w, float h) : width(w), height(h) {}

    void set_data(float a, float b)
    {
        width = a;
        height = b;
    }

    float calculateTriangleArea()
    {
        return 0.5 * width * height;
    }

    float calculateRectangleArea()
    {
        return width * height;
    }
};

int main()
{
    float width_triangle, height_triangle;
    float width_rectangle, height_rectangle;

    std::cout << "Enter width of the triangle: ";
    std::cin >> width_triangle;
    std::cout << "Enter height of the triangle: ";
    std::cin >> height_triangle;

    std::cout << "Enter width of the rectangle: ";
    std::cin >> width_rectangle;
    std::cout << "Enter height of the rectangle: ";
    std::cin >> height_rectangle;

    Shape triangle(width_triangle, height_triangle);
    Shape rectangle(width_rectangle, height_rectangle);

    std::cout << "Area of the triangle: " << triangle.calculateTriangleArea() << std::endl;
    std::cout << "Area of the rectangle: " << rectangle.calculateRectangleArea() << std::endl;

    return 0;
}
