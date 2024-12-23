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

    int largest = (x >= y && x >= z) ? x : ((y >= x && y >= z) ? y : z);
    cout << "Largest number: " << largest << endl;

    cout << "MIDDLE NUMBER........................." << endl;
    int middle = ((x >= y && x <= z) || (x <= y && x >= z)) ? x : (((y >= x && y <= z) || (y <= x && y >= z)) ? y : z);
    cout << "Middle value: " << middle << endl;

    return 0;
}
