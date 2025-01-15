#include <iostream>

using namespace std;

class Complex
{
    int real;
    int imagi;

public:
    Complex() : real(0), imagi(0)
    {
        cout << "Default constructor called" << endl;
    }
    Complex(int r, int i) : real(r), imagi(i) {}

    Complex(Complex &c)
    {
        cout << "Copy constructor called" << endl;
        real = c.real;
        imagi = c.imagi;
    }

    Complex operator+(Complex &c)
    {
        Complex temp;
        temp.real = real + c.real;
        temp.imagi = imagi + c.imagi;
        return temp;
    }
    Complex operator-(Complex &c)
    {
        Complex temp;
        temp.real = real - c.real;
        temp.imagi = imagi - c.imagi;
        return temp;
    }
    void display()
    {
        if (imagi < 0)
            cout << "Complex number: " << real << imagi << "i" << endl;
        else
            cout << "Complex number: " << real << "+" << imagi << "i" << endl;
    }

    ~Complex()
    {
        cout << "Destructor called" << endl;
    }
};

int main()
{
    Complex c1(3, 4);
    c1.display();
    Complex c2(5, 6);
    c2.display();

    c1 = c2 - c1;
    c1.display();

    Complex c3 = c1;
    c3.display();
}
