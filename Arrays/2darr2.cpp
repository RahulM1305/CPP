// Transpose of the matrix
#include <iostream>
using namespace std;
int main()
{
    int row, col;
    // Get size of matrix
    cout << "Enter the no of rows in the Matrix:";
    cin >> row;
    cout << "Enter the no of columns in the Matrix:";
    cin >> col;
    int arr[row][col];
    // Taking input of the matrix
    int i, j;
    cout << "Enter the Elements:\n";
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            cin >> arr[i][j];
        }
    }
    // compute the transpose matrix
    int trans[col][row];
    for (i = 0; i < col; i++)
    {
        for (j = 0; j < row; j++)
        {
            trans[i][j] = arr[j][i];
        }
    }
    // display the transpose Matrix
    cout << "Transpose of the given Matrix is:\n";
    for (i = 0; i < col; i++)
    {
        for (j = 0; j < row; j++)
        {
            cout << trans[i][j] << " ";
        }
        cout << "\n";
    }
}