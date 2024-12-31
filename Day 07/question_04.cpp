#include <iostream>

using namespace std;

const int MAX_ROWS = 100;
const int MAX_COLS = 100;

// Function to add two matrices
void addMatrices(int mat1[][MAX_COLS], int mat2[][MAX_COLS], int result[][MAX_COLS], int rows, int cols)
{
    for (int i = 0; i < rows; ++i)
    {
        for (int j = 0; j < cols; ++j)
        {
            result[i][j] = mat1[i][j] + mat2[i][j];
        }
    }
}

// Function to display a matrix
void displayMatrix(int mat[][MAX_COLS], int rows, int cols)
{
    for (int i = 0; i < rows; ++i)
    {
        for (int j = 0; j < cols; ++j)
        {
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }
}

int main()
{
    int rows, cols;

    cout << "Enter the number of rows and columns of the matrices: ";
    cin >> rows >> cols;

    int matrix1[MAX_ROWS][MAX_COLS], matrix2[MAX_ROWS][MAX_COLS], result[MAX_ROWS][MAX_COLS];

    cout << "Enter the elements of the first matrix:\n";
    for (int i = 0; i < rows; ++i)
    {
        for (int j = 0; j < cols; ++j)
        {
            cin >> matrix1[i][j];
        }
    }

    cout << "Enter the elements of the second matrix:\n";
    for (int i = 0; i < rows; ++i)
    {
        for (int j = 0; j < cols; ++j)
        {
            cin >> matrix2[i][j];
        }
    }

    addMatrices(matrix1, matrix2, result, rows, cols);

    cout << "The sum of the matrices is:\n";
    displayMatrix(result, rows, cols);

    return 0;
}
