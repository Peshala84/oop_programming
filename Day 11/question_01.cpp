#include <iostream>

using namespace std;

class Chef
{
public:
    void makeChicken()
    {
        cout << "The chef makes chicken" << endl;
    }
    void makeSalad()
    {
        cout << "The chef makes salad" << endl;
    }
    void makeSpecialDish()
    {
        cout << "The chef makes bbq ribs" << endl;
    }
};

class ItalianChef : public Chef
{

public:
    void makePasta()
    {
        cout << "The chef makes pasta" << endl;
    }
    // Overriding the makeSpecialDish method
    void makeSpecialDish()
    {
        cout << "The chef makes chicken parm" << endl;
    }
};

int main()
{
    Chef myChef;
    myChef.makeChicken();

    ItalianChef myItalianChef;
    myItalianChef.makeChicken();

    myChef.makeSpecialDish();
    myItalianChef.makeSpecialDish();

    return 0;
}