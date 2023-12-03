// To find transpose of a matrix

#include <bits/stdc++.h>
using namespace std;
#define R 4
#define C 4
void printmatrix(int m[R][C])
{
    for (int i = 0; i < R; i++)
    {
        for (int j = 0; j < C; j++)
        {
            cout << m[i][j] << " ";
        }
        cout << endl;
    }
}
int main()
{
    int a[R][C] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}, {13, 14, 15, 16}};
    int b[R][C];
    cout << "Given Matrix: " << endl;
    printmatrix(a);
    for (int i = 0; i < R; i++)
    {
        for (int j = 0; j < C; j++)
        {
            b[i][j] = a[j][i];
        }
    }
    cout << "Transpose Matrix: " << endl;
    printmatrix(b);
    return 0;
}