#include <iostream>
using namespace std;

// Class definition
class Area {
private:
    float length;
    float breadth;
public:
    // Function to set length and breadth
    void setDim(float l, float b) {
        length = l;
        breadth = b;
    }

    // Function to calculate and return area
    float getArea() {
        return length * breadth;
    }
};

int main() {
    float length, breadth;

    // Input length and breadth from the user
    cout << "Enter length of rectangle: ";
    cin >> length;
    cout << "Enter breadth of rectangle: ";
    cin >> breadth;

    // Create an object of class Area
    Area rectangle;

    // Set dimensions
    rectangle.setDim(length, breadth);

    // Get and print area
    cout << "Area of rectangle: " << rectangle.getArea() << endl;

    return 0;
}
