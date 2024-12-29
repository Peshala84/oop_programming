#include <iostream>

class SimpleInteger
{
private:
    int value;

public:
    SimpleInteger(int val) : value(val) {}

    SimpleInteger operator-()
    {
        return SimpleInteger(-value);
    }

    void printValue()
    {
        std::cout << "Current value: " << value << std::endl;
    }
};

int main()
{
    SimpleInteger num(10);

    num.printValue();

    SimpleInteger negatedNum = -num;

    negatedNum.printValue();

    return 0;
}
