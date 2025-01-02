#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Marks
{
protected:
    int rollNumber;
    string name;
    int marks;

public:
    Marks()
    {
        rollNumber = 0;
        name = " ";
        marks = 0;
    }
    Marks(const string &studentName, int studentMarks)
    {
        rollNumber = generateRollNumber();
        name = studentName;
        marks = studentMarks;
    }

    static int generateRollNumber()
    {
        static int rollCounter = 1;
        return rollCounter++;
    }

    void displayDetails() const
    {
        cout << "Roll Number: " << rollNumber << "\nName: " << name << "\nMarks: " << marks << "\n";
    }

    int getMarks() const
    {
        return marks;
    }
};

class Database : public Marks
{
public:
    Database(const string &studentName, int databaseMarks)
    {
        Marks(studentName, databaseMarks);
    }
};

class Statistics : public Marks
{
public:
    Statistics(const string &studentName, int statisticsMarks)
    {
        Marks(studentName, statisticsMarks);
    }
};

class DataStructures : public Marks
{
public:
    DataStructures(const string &studentName, int dataStructuresMarks)
    {
        Marks(studentName, dataStructuresMarks);
    }
};

int main()
{
    int numStudents;
    cout << "Enter the number of students in the class: ";
    cin >> numStudents;

    vector<Database> databaseStudents;
    vector<Statistics> statisticsStudents;
    vector<DataStructures> dataStructuresStudents;

    for (int i = 0; i < numStudents; ++i)
    {
        string name;
        int databaseMarks, statisticsMarks, dataStructuresMarks;

        cout << "Enter student name: ";
        cin >> name;

        cout << "Enter marks in Database: ";
        cin >> databaseMarks;

        cout << "Enter marks in Statistics: ";
        cin >> statisticsMarks;

        cout << "Enter marks in Data Structures: ";
        cin >> dataStructuresMarks;

        databaseStudents.emplace_back(name, databaseMarks);
        statisticsStudents.emplace_back(name, statisticsMarks);
        dataStructuresStudents.emplace_back(name, dataStructuresMarks);

        cout << endl;
    }

    vector<int> totalMarks;
    for (int i = 0; i < numStudents; ++i)
    {
        int total = databaseStudents[i].getMarks() + statisticsStudents[i].getMarks() + dataStructuresStudents[i].getMarks();
        totalMarks.push_back(total);
    }

    for (int i = 0; i < numStudents; ++i)
    {
        cout << "\nStudent " << i + 1 << " Details:\n";
        databaseStudents[i].displayDetails();
        statisticsStudents[i].displayDetails();
        dataStructuresStudents[i].displayDetails();
        cout << "Total Marks: " << totalMarks[i] << "\n\n";
    }

    int totalSum = 0;
    for (int i = 0; i < numStudents; ++i)
    {
        totalSum += totalMarks[i];
    }

    double averageMarks = static_cast<double>(totalSum) / numStudents;
    cout << "Average Marks of the class: " << averageMarks << "\n";

    return 0;
}
