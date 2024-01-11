#include <bits/stdc++.h>
using namespace std;

int chk_anagram(string s1, string s2)
{
    int n1 = s1.length();
    int n2 = s2.length();
    if (n1 != n2)
    {
        return 0;
    }
    else
    {
        sort(s1.begin(), s1.end());
        sort(s2.begin(), s2.end());

        for (int i = 0; i < n1; i++)
        {
            if (s1[i] != s2[i])
            {
                return 0;
            }
        }
    }
    return 1;
}

int main()
{
    string s1 = "abcdabcss";
    string s2 = "bcadssabc";
    int res = chk_anagram(s1, s2);

    cout << "String 1: " << s1 << endl;
    cout << "String 2: " << s2 << endl;
    if (res == 0)
        cout << "Not Anagram" << endl;
    else
        cout << "Anagram" << endl;
    return 0;
}