#include <iostream>
using namespace std;

class Employee
{
public:
    virtual void calculateSalary() = 0;
};
class FullTimeEmployee : public Employee
{
private:
    int salary;

public:
    void getsalary(int sal)
    {
        salary = sal;
    }
    void calculateSalary() override
    {
        cout << "Full Time Employee Salary = " << salary << endl;
    }
};
class PartTimeEmployee : public Employee
{
private:
    int salary;
    int hours_for_week;

public:
    void getsalary(int sal, int hours)
    {
        salary = sal;
        hours_for_week = hours;
    }
    void calculateSalary() override
    {
        cout << "PartTime Employee Salary = " << salary * hours_for_week * 4 << endl;
    }
};
class ContractEmployee : public Employee
{
private:
    int salary;

public:
    void getsalary(int sal)
    {
        salary = sal;
    }
    void calculateSalary() override
    {
        cout << "Contruct Employee Salary = " << salary << endl;
    }
};

int main()
{
    FullTimeEmployee Kamal;
    PartTimeEmployee Piyal;
    ContractEmployee Damith;

    Kamal.getsalary(60000);
    Piyal.getsalary(2000, 20);
    Damith.getsalary(30000);

    Kamal.calculateSalary();
    Piyal.calculateSalary();
    Damith.calculateSalary();

    return 0;
}
