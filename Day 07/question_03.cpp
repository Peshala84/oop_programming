#include <iostream>
#include <string>
using namespace std;

class Employee {
private:
    string name;
    int year_of_joining;
    float salary;
    string address;

public:
    // Constructor to initialize the employee data
    Employee(string n, int yoj, float sal, string add) {
        name = n;
        year_of_joining = yoj;
        salary = sal;
        address = add;
    }

    // Function to display employee information
    void display() {
        cout << name << "\t" << year_of_joining << "\t" << salary << "\t" << address << endl;
    }
};

int main() {
    // Creating objects of Employee class for three employees
    Employee emp1("Robert", 1994, 50000, "64C- WallsStreat");
    Employee emp2("Sam", 2000, 60000, "68D- WallsStreat");
    Employee emp3("John", 1999, 55000, "26B- WallsStreat");

    // Displaying information of three employees
    cout << "Name\tYear of joining\tSalary\tAddress" << endl;
    emp1.display();
    emp2.display();
    emp3.display();

    return 0;
}
