#include <iostream>

using namespace std;

int main()
{
    int num;
    cout << "Enter size of Natural Number : ";
    cin >> num;
    int i;
    int sum = 0;
    for (i = 0; i <= num; i++)
    {

        sum = sum + i;
    }
    cout << "Sum : " << sum << endl;
}