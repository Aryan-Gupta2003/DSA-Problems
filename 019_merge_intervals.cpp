// merge all overlapping intervals into one and
// result should have only mutually exclusive intervals

#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> func(vector<vector<int>> &a)
{
    if (a.empty())
    {
        return vector<vector<int>>();
    }
    sort(a.begin(), a.end(), [](const vector<int> &p, const vector<int> &q)
         { return p[0] < q[0]; });

    stack<vector<int>> s;
    s.push(a[0]);
    for (int i = 1; i < a.size(); i++)
    {
        vector<int> c = a[i];
        vector<int> &top = s.top();
        if (c[0] <= top[1])
        {
            top[1] = max(top[1], c[1]);
        }
        else
        {
            s.push(c);
        }
    }
    vector<vector<int>> mergedIntervals;
    while (!s.empty())
    {
        mergedIntervals.insert(mergedIntervals.begin(), s.top());
        s.pop();
    }
    return mergedIntervals;
}

int main()
{
    vector<vector<int>> a = {{9, 13}, {1, 4}, {2, 3}, {5, 7}};
    vector<vector<int>> merged = func(a);

    cout << "Merged Intervals : ";
    for (const vector<int> &i : merged)
    {
        cout << "[" << i[0] << ", " << i[1] << "] ";
    }
    cout << endl;
    return 0;
}