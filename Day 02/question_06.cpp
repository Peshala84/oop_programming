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

    if (average < 0)
    {

        cout << "Invalid marks" << endl;
    }
    else
    {

        if (average >= 70)
        {
            cout << "Very Good" << endl;
        }
        else if (average >= 55)
        {
            cout << "Good" << endl;
        }
        else if (average >= 40)
        {
            cout << "Pass" << endl;
        }
        else
        {
            cout << "Fail" << endl;
        }
    }

    return 0;
}
