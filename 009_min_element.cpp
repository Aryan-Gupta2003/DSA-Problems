// Find the Minimum element in a Sorted and Rotated Array

#include <bits/stdc++.h>
using namespace std;
int min_element(vector<int> &a, int start, int end)
{
    if (a[start] <= a[end])
    {
        return a[start];
    }
    while (start <= end)
    {
        int m = (start + end) / 2;
        if ((m - 1 >= 0) && a[m] < a[m - 1])
        {
            return a[m];
        }
        if (a[m] > a[end])
        {
            start = m + 1;
        }
        else
        {
            end = m - 1;
        }
    }
    return -1;
}

int main()
{
    vector<int> a = {5, 6, 1, 2, 3, 4};
    int n = a.size();
    int res = min_element(a, 0, n - 1);
    cout << "Given Array: ";
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << "\nMinimum element: " << res << endl;
    return 0;
}