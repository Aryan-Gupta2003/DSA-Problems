// Print a given matrix in spiral form

#include <bits/stdc++.h>
using namespace std;
#define R 4
#define C 4
void spiralmatrix(int a[R][C], int r, int c)
{
    int row = 0, col = 0, i;
    while ((row < r) && (col < c))
    {
        for (i = col; i < c; i++)
        {
            cout << a[row][i] << " ";
        }
        row++;
        for (i = row; i < r; i++)
        {
            cout << a[i][c - 1] << " ";
        }
        c--;
        if (row < r)
        {
            for (i = (c - 1); i >= col; i--)
            {
                cout << a[r - 1][i] << " ";
            }
            r--;
        }
        if (col < c)
        {
            for (int i = (r - 1); i >= row; i--)
            {
                cout << a[i][col] << " ";
            }
            col++;
        }
    }
}

int main()
{
    int a[R][C] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}, {13, 14, 15, 16}};
    cout << "Given Matrix: " << endl;
    for (int i = 0; i < R; i++)
    {
        for (int j = 0; j < C; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    cout << "Spiral Matrix: " << endl;
    spiralmatrix(a, R, C);
    return 0;
}