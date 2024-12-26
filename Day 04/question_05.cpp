#include <iostream>
#include <string>

class Student
{
public:
    std::string name;
    int roll_no;
};

int main()
{

    Student student;

    student.name = "John";
    student.roll_no = 2;

    std::cout << "Name: " << student.name << std::endl;
    std::cout << "Roll No: " << student.roll_no << std::endl;

    return 0;
}
