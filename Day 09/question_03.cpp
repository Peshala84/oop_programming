#include <iostream>
using namespace std;

class Student
{
public:
    Student(int year)
    {
        cout << year << " A/L student" << endl;
    }
};

class Tution_class : public Student
{
public:
    Tution_class(int year) : Student(year)
    {
        cout << year << " A/L Tution Class" << endl;
    }
};

class School : public Student
{
public:
    School(int year) : Student(year)
    {
        cout << year << " Viyayaba A/L students" << endl;
    }
};

class Exam : public Tution_class, public School
{
public:
    Exam(int year) : Tution_class(year), School(year)
    {
        cout << year << " A/l Exam" << endl;
    }
};

int main()
{
    Exam E(2024);

    return 0;
}
