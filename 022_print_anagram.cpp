// Print all anagrams together in array

#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<string> s{"sit", "cat", "act", "tac", "its"};
    vector<string> v;
    vector<string> a;
    for (int k = 0; k < s.size(); k++)
    {
        string s1 = s[k];
        sort(s1.begin(), s1.end());
        a.push_back(s1);
    }

    for (int i = 0; i < s.size(); i++)
    {
        for (int j = i + 1; j < s.size(); j++)
        {
            if (a[i] == a[j])
            {
                auto f1 = find(v.begin(), v.end(), s[i]);
                auto f2 = find(v.begin(), v.end(), s[j]);
                auto end = v.end();
                if (f1 == end)
                    v.push_back(s[i]);

                if (f2 == end)
                    v.push_back(s[j]);
            }
        }
    }

    cout << "Array: [ ";
    for (auto ele1 : s)
        cout << "\"" << ele1 << "\" ";
    cout << "]" << endl;

    cout << "Anagram: ";
    for (auto ele2 : v)
        cout << ele2 << " ";
    cout << endl;
    return 0;
}