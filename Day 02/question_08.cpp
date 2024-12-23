#include <iostream>

using namespace std;

int main()
{
    int x, y, z;
    cout << "Enter marks for subject 1 : ";
    cin >> x;
    cout << "Enter marks for subject 2 : ";
    cin >> y;
    cout << "Enter marks for subject 3 : ";
    cin >> z;

    float average;
    average = (x + y + z) / 3.0;

    cout << (average < 0 ? "Invalid Marks" : (average >= 70 ? "Very Good" : (average >= 55 ? "Good" : (average >= 40 ? "Pass" : "Fail")))) << endl;

    return 0;
}
