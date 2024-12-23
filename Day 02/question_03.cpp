#include <iostream>

using namespace std;
int main()
{

    int x, y, z;
    cout << "Enter x value : ";
    cin >> x;
    cout << "Enter y value : ";
    cin >> y;
    cout << "Enter z value : ";
    cin >> z;

    cout << "LARGEST NUMBER......................." << endl;
    if (x >= y && x >= z)
    {
        cout << "Largest Number : " << x;
    }
    else if (y >= x && y >= z)
    {
        cout << "Largest Number : " << y;
    }
    else
    {
        cout << "Largest Number : " << z;
    }
    cout << "\n";
    cout << "MIDDLE NUMBER........................." << endl;

    if ((x >= y && x <= z) || (y >= x && z <= x))
    {
        cout << "Middle value : " << x;
    }
    else if ((y >= x && y <= z) || (x >= y && z <= y))
    {
        cout << "Middle value : " << y;
    }
    else
    {
        cout << "Middle value : " << z;
    }
}
