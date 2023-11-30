// Set matrix ith row and jth column as 1 if m[i][j] = 1

#include <bits/stdc++.h>
using namespace std;

void setzero(vector<vector<int>> &m, int r, int c)
{
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if (m[i][j] == 1)
            {
                int row = i, col = j;
                for (int k = 0; k < r; k++)
                {
                    if (m[k][col] != 1)
                    {
                        m[k][col] = -1;
                    }
                }
                for (int k = 0; k < c; k++)
                {
                    if (m[row][k] != 1)
                    {
                        m[row][k] = -1;
                    }
                }
            }
        }
    }
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if (m[i][j] == -1)
            {
                m[i][j] = 1;
            }
        }
    }
}

int main()
{
    vector<vector<int>> m = {{0, 0, 0}, {0, 0, 1}};
    int r = m.size(), c = m[0].size();
    setzero(m, r, c);
    cout << "Final Matrix: " << endl;
    for (int i = 0; i < r; i++)
    {

        for (int j = 0; j < c; j++)
        {
            cout << m[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}