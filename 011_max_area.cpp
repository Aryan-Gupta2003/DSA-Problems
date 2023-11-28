// Container with Most Water

#include <bits/stdc++.h>
using namespace std;
int max_area(int a[], int n)
{
    int l = 0, w = n - 1, area = 0;
    while (l < w)
    {
        area = max(area, min(a[l], a[w]) * (w - 1));
        if (a[l] < a[w])
        {
            l += 1;
        }
        else
        {
            w -= 1;
        }
    }
    return area;
}
int main()
{
    int a[] = {3, 1, 2, 4, 5};
    int n = sizeof(a) / sizeof(a[0]);
    cout << "Given Array: ";
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << "\nMax Area: " << max_area(a, n) << endl;
    return 0;
}