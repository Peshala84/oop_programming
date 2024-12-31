#include <iostream>
using namespace std;

class Shape {
protected:
    float width, height;

public:
    // Constructor
    Shape(float w, float h) : width(w), height(h) {}

    // Set data function
    void set_data(float a, float b) {
        width = a; height = b;
    }

    // Function to calculate area of triangle
    float areaTriangle() {
        return 0.5 * width * height;
    }

    // Function to calculate area of rectangle
    float areaRectangle() {
        return width * height;
    }
};

int main() {
    float width, height;

    cout << "Enter the width and height of the shape: ";
    cin >> width >> height;

    // Create an object of Shape class with given dimensions
    Shape shape(width, height);

    // Display area of triangle
    cout << "Area of Triangle: " << shape.areaTriangle() << endl;

    // Display area of rectangle
    cout << "Area of Rectangle: " << shape.areaRectangle() << endl;

    return 0;
}


