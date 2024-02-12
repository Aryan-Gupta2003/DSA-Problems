// Longest Palindromic Substring

#include <bits/stdc++.h>
using namespace std;

int longestSubstring(string str)
{
    int n = str.length();
    bool t[n][n];

    memset(t, 0, sizeof(t));
    int maxL = 1, s = 0;

    for (int i = 0; i < n; ++i)
        t[i][i] = true;

    for (int i = 0; i < n - 1; ++i)
    {
        if (str[i] == str[i + 1])
        {
            t[i][i + 1] = true;
            s = i;
            maxL = 2;
        }
    }

    for (int k = 3; k <= n; ++k)
    {
        for (int i = 0; i < n - k + 1; ++i)
        {
            int j = i + k - 1;
            if (t[i + 1][j - 1] && str[i] == str[j])
            {
                t[i][j] = true;

                if (maxL < k)
                {
                    s = i;
                    maxL = k;
                }
            }
        }
    }

    cout << "Longest palindrome substring is: ";
    for (int i = s; i <= (s + maxL - 1); i++)
        cout << str[i];
    return maxL;
}

int main()
{
    string s1 = "hellohowoholde";
    cout << "\nLength is: " << longestSubstring(s1);
    return 0;
}