// Check if given Parentheses expression is balanced or not

#include <bits/stdc++.h>
using namespace std;
int main()
{
    string p;
    cin >> p;
    int s = 0, e = 0;
    for (int i = 0; i < p.length(); i++)
    {
        if (p[i] == '{')
            s += 1;
        else if (p[i] == '}')
            e += 1;
    }
    if (s == e)
        cout << "Balanced Paranthesis";
    else
        cout << "Not Balanced Paranthesis";
    return 0;
}