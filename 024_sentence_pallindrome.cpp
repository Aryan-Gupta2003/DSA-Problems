// Check pallindrome in sentence (Palindrome after removing spaces, dots, .. etc)

#include <bits/stdc++.h>
using namespace std;

bool pallindrome(string str)
{
    int s = 0, e = str.length() - 1;
    for (int i = 0; i < e; i++)
    {
        str[i] = tolower(str[i]);
    }
    str.erase(remove(str.begin(), str.end(), ' '), str.end());

    string str2 = str;
    reverse(str2.begin(), str2.end());

    return str == str2;
}

int main()
{
    string str = "Too hot to hoot";
    if (pallindrome(str))
        cout << "Sentence is in pallindrome" << endl;
    else
        cout << "Sentence is not in pallindrome" << endl;
    return 0;
}
