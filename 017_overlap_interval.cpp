#include <bits/stdc++.h>
using namespace std;
struct Interval
{
    int start;
    int end;
    Interval()
        : start(0), end(0)
    {
    }
    Interval(int s, int e)
        : start(s), end(e)
    {
    }
};

bool checkoverlap(Interval a, Interval b)
{
    return (min(a.end, b.end) >= max(a.start, b.start));
}

vector<Interval> insertNewInterval(vector<Interval> &a, Interval b)
{
    vector<Interval> ans;
    int n = a.size();
    if (n == 0)
    {
        ans.push_back(b);
        return ans;
    }

    if (b.end < a[0].start || b.start > a[n - 1].end)
    {
        if (b.end < a[0].start)
            ans.push_back(b);

        for (int i = 0; i < n; i++)
            ans.push_back(a[i]);

        if (b.start > a[n - 1].end)
            ans.push_back(b);

        return ans;
    }

    if (b.start <= a[0].start && b.end >= a[n - 1].end)
    {
        ans.push_back(b);
        return ans;
    }

    bool overlap = true;
    for (int i = 0; i < n; i++)
    {
        overlap = checkoverlap(a[i], b);
        if (!overlap)
        {
            ans.push_back(a[i]);
            if (i < n && b.start > a[i].end && b.end < a[i + 1].start)
                ans.push_back(b);

            continue;
        }

        Interval temp;
        temp.start = min(b.start, a[i].start);

        while (i < n && overlap)
        {
            temp.end = max(b.end, a[i].end);
            if (i == n - 1)
                overlap = false;
            else
                overlap = checkoverlap(a[i + 1], b);
            i++;
        }
        i--;
        ans.push_back(temp);
    }
    return ans;
}

int main()
{
    vector<Interval> i;
    Interval newi;

    newi.start = 1;
    newi.end = 4;
    i.push_back(newi);
    newi.start = 7;
    newi.end = 9;
    i.push_back(newi);
    newi.start = 12;
    newi.end = 16;
    i.push_back(newi);
    newi.start = 18;
    newi.end = 22;
    i.push_back(newi);
    newi.start = 24;
    newi.end = 29;
    i.push_back(newi);
    newi.start = 5;
    newi.end = 16;

    vector<Interval> ans = insertNewInterval(i, newi);

    for (int i = 0; i < ans.size(); i++)
        cout << ans[i].start << ", " << ans[i].end << "\n";
    return 0;
}