// Search a Word in a 2D Grid of characters (Word Search)

#include <bits/stdc++.h>
using namespace std;
#define ROW 3
#define COL 13

int x[] = {-1, -1, -1, 0, 0, 1, 1, 1};
int y[] = {-1, 0, 1, -1, 1, -1, 0, 1};

bool search(char *grid, int row, int col, string word, int R, int C)
{
    if (*(grid + row * C + col) != word[0])
        return false;
    int l = word.length();
    for (int d = 0; d < 8; d++)
    {
        int k, rd = row + x[d], cd = col + y[d];
        for (k = 1; k < l; k++)
        {
            if (rd >= R || rd < 0 || cd >= C || cd < 0)
                break;
            if (*(grid + rd * C + cd) != word[k])
                break;
            rd += x[d], cd += y[d];
        }
        if (k == l)
            return true;
    }
    return false;
}

void wordsearch(char *grid, string word, int R, int C)
{
    for (int r = 0; r < R; r++)
    {
        for (int c = 0; c < C; c++)
        {
            if (search(grid, r, c, word, R, C))
                cout << "Pattern Found at " << r << ", " << c << endl;
        }
    }
}

int main()
{
    char grid[ROW][COL] = {"GEEKSFORGEEK", "GEKSQUIZGEEK", "IDQAPRACTICE"};
    wordsearch((char *)grid, "GEEK", ROW, COL);
    return 0;
}