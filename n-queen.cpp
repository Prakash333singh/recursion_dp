#include <iostream>
using namespace std;

bool isQueenSafe(int chess[][4], int row, int col, int n)
{
    for (int i = row - 1, j = col - 1; i >= 0 && j >= 0; i--, j--)
    {
        if (chess[i][j] == 1)
        {
            return false;
        }
    }

    for (int i = row - 1, j = col; i >= 0; i--)
    {
        if (chess[i][j] == 1)
        {
            return false;
        }
    }

    for (int i = row - 1, j = col + 1; i >= 0 && j < n; i--, j++)
    {
        if (chess[i][j] == 1)
        {
            return false;
        }
    }

    for (int i = row, j = col - 1; j >= 0; j--)
    {
        if (chess[i][j] == 1)
        {
            return false;
        }
    }

    return true;
}

void printNQueens(int chess[][4], string qsf, int row)
{
    int n = sizeof(chess[0]) / sizeof(chess[0][0]);
    if (row == n)
    {
        cout << qsf << endl;
        return;
    }
    for (int col = 0; col < n; col++)
    {
        if (chess[row][col] == 0 && isQueenSafe(chess, row, col, n))
        {
            chess[row][col] = 1;
            printNQueens(chess, qsf + to_string(row) + "-" + to_string(col) + ", ", row + 1);
            chess[row][col] = 0;
        }
    }
}

int main()
{
    int n;
    cin >> n;
    int chess[4][4] = {0}; // Initialize the chessboard with zeros
    printNQueens(chess, "", 0);
    return 0;
}
