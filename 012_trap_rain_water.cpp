// Trapping Rain Water

#include <bits/stdc++.h>
using namespace std;
int trap_rain_water(int a[], int n)
{
    int *left = new int[sizeof(int) * n];
    int *right = new int[sizeof(int) * n], area = 0;
    left[0] = a[0];
    for (int i = 1; i < n; i++)
    {
        left[i] = max(left[i - 1], a[i]);
    }
    right[n - 1] = a[n - 1];
    for (int i = (n - 2); i >= 0; i--)
    {
        right[i] = max(right[i + 1], a[i]);
    }
    for (int i = 1; i < (n - 1); i++)
    {
        int x = min(left[i - 1], right[i + 1]);
        if (x > a[i])
        {
            area += x - a[i];
        }
    }
    return area;
}

int main()
{
    int a[] = {3, 0, 2, 0, 4};
    int n = sizeof(a) / sizeof(a[0]);
    cout << "Water Trapped in Stairs: " << trap_rain_water(a, n) << endl;
    return 0;
}