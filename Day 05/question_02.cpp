#include <iostream>

using namespace std;

class Complex
{
public:
    int real;
    int imag;

    Complex(int r, int i) : real(r), imag(i) {}

    Complex add(const Complex &other)
    {
        return Complex(real + other.real, imag + other.imag);
    }

    Complex subtract(const Complex &other)
    {
        return Complex(real - other.real, imag - other.imag);
    }

    Complex multiply(const Complex &other)
    {
        return Complex((real * other.real) - (imag * other.imag), (real * other.imag) + (imag * other.real));
    }

    void display()
    {
        cout << "Result: " << real << " + " << imag << "i" << endl;
    }
};

int main()
{
    double r1, i1;
    cout << "Enter the real part of the first complex number: ";
    cin >> r1;
    cout << "Enter the imaginary part of the first complex number: ";
    cin >> i1;

    double r2, i2;
    cout << "Enter the real part of the second complex number: ";
    cin >> r2;
    cout << "Enter the imaginary part of the second complex number: ";
    cin >> i2;

    Complex c1(r1, i1);
    Complex c2(r2, i2);

    Complex sum = c1.add(c2);
    Complex difference = c1.subtract(c2);
    Complex product = c1.multiply(c2);

    cout << "Sum :\n";
    sum.display();

    cout << "\nDifference :\n";
    difference.display();

    cout << "\nProduct :\n";
    product.display();

    return 0;
}
