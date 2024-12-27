#include <iostream>

using namespace std;
int main()
{
    int num;

    cout << "Enter Your Number : ";
    cin >> num;

    int sum = 0;

    while (num > 0)
    {

        sum += num;
        cout << "Enter Number agin : ";
        cin >> num;
    }

    cout << "Sum = " << sum;

    return 0;
}
