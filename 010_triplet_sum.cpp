// Find all triplets with zero sum

#include <bits/stdc++.h>
#include <unordered_set>
using namespace std;
void triplet_sum(vector<int> &a, int n)
{
    bool found = false;
    for (int i = 0; i < (n - 1); i++)
    {
        unordered_set<int> s;
        for (int j = (i + 1); j < n; j++)
        {
            int x = -(a[i] + a[j]);
            if (s.find(x) != s.end())
            {
                cout << "( " << x << " " << a[i] << " " << a[j] << " )" << endl;
                found = true;
            }
            else
            {
                s.insert(a[j]);
            }
        }
    }
    if (found == false)
    {
        cout << "Not exist" << endl;
    }
}
int main()
{
    vector<int> a = {0, -1, 2, -3, 1};
    int n = a.size();
    cout << "Given Array: ";
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << "\nTriplet pair:\n";
    triplet_sum(a, n);
    return 0;
}