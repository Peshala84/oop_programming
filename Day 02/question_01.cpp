
#include<iostream>

using namespace std;

int main()
{
    int x;
    cout << "Enter an integer: ";
    cin >> x;

    int r;
    r = (x < 0) ? -x : x;
    cout << "Absolute value: " << r << endl;

    return 0;
}
