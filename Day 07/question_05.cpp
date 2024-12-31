#include <iostream>

class Employee {
private:
    double salary;
    int hoursWorkedPerDay;

public:
    // Constructor
    Employee(double initialSalary, int initialHoursWorkedPerDay) : salary(initialSalary), hoursWorkedPerDay(initialHoursWorkedPerDay) {}

    // Function to get information
    void getInfo(double newSalary, int newHoursWorkedPerDay) {
        salary = newSalary;
        hoursWorkedPerDay = newHoursWorkedPerDay;
    }

    // Function to add $10 to salary if it's less than $500
    void AddSal() {
        if (salary < 500) {
            salary += 10;
        }
    }

    // Function to add $5 to salary if hours worked per day is more than 6 hours
    void AddWork() {
        if (hoursWorkedPerDay > 6) {
            salary += 5;
        }
    }

    // Function to print final salary
    void printFinalSalary() {
        std::cout << "Final salary: $" << salary << std::endl;
    }
};

int main() {
    double initialSalary;
    int initialHoursWorkedPerDay;

    // Taking input for initial salary and hours worked per day
    std::cout << "Enter initial salary: $";
    std::cin >> initialSalary;
    std::cout << "Enter initial hours worked per day: ";
    std::cin >> initialHoursWorkedPerDay;

    // Creating Employee object
    Employee emp(initialSalary, initialHoursWorkedPerDay);

    // Calling functions to modify salary
    emp.AddSal();
    emp.AddWork();

    // Printing final salary
    emp.printFinalSalary();

    return 0;
}
