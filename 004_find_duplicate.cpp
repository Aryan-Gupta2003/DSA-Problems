// Find duplicates in O(n) time and O(1) extra space

#include <bits/stdc++.h>
using namespace std;
vector<int> duplicate(int arr[], int n)
{
    vector<int> ans;
    for (int i = 0; i < n; i++)
    {
        int s = arr[i] % n;
        arr[s] += n;
    }
    for (int i = 0; i < n; i++)
    {
        if ((arr[i] / n) >= 2)
            ans.push_back(i);
    }
    return ans;
}
int main()
{
    int a[] = {1, 2, 4, 2, 1, 5, 4, 0, 3}, n, x;
    n = sizeof(a) / sizeof(a[0]);
    vector<int> res = duplicate(a, n);
    for (auto x : res)
    {
        cout << x << " ";
    }
    return 0;
}