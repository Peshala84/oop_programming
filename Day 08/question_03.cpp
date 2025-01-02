#include <iostream>
using namespace std;

class base
{
public:
    virtual void fun_1() { cout << "base-1\n"; }
    virtual void fun_2() { cout << "base-2\n"; }
    virtual void fun_3() { cout << "base-3\n"; }
    virtual void fun_4() = 0; // Pure virtual function
};

class derived : public base
{
public:
    void fun_1() override { cout << "derived-1\n"; }
    void fun_2() override { cout << "derived-2\n"; }
    void fun_4() override { cout << "derived-4\n"; }
};

int main()
{
    base *p;
    derived obj1;
    p = &obj1;

    // Late binding (RTP) - fun_1 is now virtual in the base class
    p->fun_1();

    // Late binding (RTP)
    p->fun_2();

    // Late binding (RTP)
    p->fun_3();

    // Late binding (RTP)
    p->fun_4();
    return 0;
}