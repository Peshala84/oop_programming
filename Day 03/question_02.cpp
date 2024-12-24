#include <iostream>

using namespace std;

int main()
{
    int i, j, multi = 0;
    for (i = 0; i < 10; i++)
    {

        for (j = i + 1; j <= 10; j++)
        {

            multi = i * j;
        }
        cout << i << "*" << 10 << "=" << multi << endl;
    }
}