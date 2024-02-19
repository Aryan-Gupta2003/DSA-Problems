// Calculate length of the longest substring without repeating characters

#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s = "abc";
    string a = "";
    int c = 0, m = 0, i = 0, j = 1;
    while (i < s.length())
    {
        if (a.find(s[i]) == string::npos)
        {
            a += s[i];
            c++;
        }
        else
        {
            if (m < c)
            {
                m = c;
            }
            c = 0;
            a = "";
            i = j;
            j++;
        }
        i++;
    }
    m = (m < c) ? c : m;
    cout << "Longest substring without repeating characters: " << m;
    cout << endl;
    return 0;
}