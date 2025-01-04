#include <iostream>
using namespace std;

class Year
{
public:
    int year;

    void get_year()
    {
        cout << "enter year : ";
        cin >> year;
    }
};

class Month : public Year
{
public:
    int month;

    void get_month()
    {
        cout << "enter month : ";
        cin >> month;
    }
};

class Date : public Month
{
public:
    int date;

    void get_date()
    {
        cout << "enter date : ";
        cin >> date;
    }

    void print()
    {
        cout << year << ":" << month << ":" << date;
    }
};

int main()
{

    Date d;

    d.get_year();
    d.get_month();
    d.get_date();
    d.print();

    return 0;
}
