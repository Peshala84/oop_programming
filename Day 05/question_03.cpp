#include <iostream>
using namespace std;

int main()
{
    int a, b, m1[100][100], m2[100][100], sum[100][100], i, j;

    cout << "Enter number of rows : ";
    cin >> a;

    cout << "Enter number of columns : ";
    cin >> b;

    cout << endl
         << "Enter elements of 1st matrix: " << endl;

    for (i = 0; i < a; ++i)
        for (j = 0; j < b; ++j)
        {
            cout << "Enter element a" << i + 1 << j + 1 << " : ";
            cin >> m1[i][j];
        }

    cout << endl
         << "Enter elements of 2nd matrix: " << endl;
    for (i = 0; i < a; ++i)
        for (j = 0; j < b; ++j)
        {
            cout << "Enter element b" << i + 1 << j + 1 << " : ";
            cin >> m2[i][j];
        }

    for (i = 0; i < a; ++i)
        for (j = 0; j < b; ++j)
            sum[i][j] = m1[i][j] + m2[i][j];

    cout << endl
         << "Sum of two matrix is: " << endl;
    for (i = 0; i < a; ++i)
        for (j = 0; j < b; ++j)
        {
            cout << sum[i][j] << "  ";
            if (j == b - 1)
                cout << endl;
        }

    return 0;
}
