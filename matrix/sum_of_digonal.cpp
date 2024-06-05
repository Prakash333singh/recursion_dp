#include <bits\stdc++.h>
using namespace std;
int main()
{
    int rows = 3;
    int col = 4;
    vector<vector<int>> matrix(rows, vector<int>(col, 0));

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << matrix[i][j];
        }
        cout << endl;
    }
    return 0;
}