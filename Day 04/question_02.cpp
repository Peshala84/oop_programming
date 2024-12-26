#include <iostream>
using namespace std;

class Area
{
private:
    float length;
    float breadth;

public:
    void setDim(float l, float b)
    {
        length = l;
        breadth = b;
    }

    float getArea()
    {
        return length * breadth;
    }
};

int main()
{
    float l, b;
    cout << "Enter length of the rectangle: ";
    cin >> l;
    cout << "Enter breadth of the rectangle: ";
    cin >> b;

    Area rectangle;
    rectangle.setDim(l, b);

    cout << "Area of the rectangle is: " << rectangle.getArea() << endl;

    return 0;
}
