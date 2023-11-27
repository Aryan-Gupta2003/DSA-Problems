// Product of Array except itself

#include <bits/stdc++.h>
using namespace std;
int product(int a[], int n)
{
    if (n == 1)
    {
        cout << 0;
        return 0;
    }
    int *l = new int[sizeof(int) * n];
    int *r = new int[sizeof(int) * n];
    int *prod = new int[sizeof(int) * n];
    l[0] = 1;
    r[n - 1] = 1;
    for (int i = 1; i < n; i++)
        l[i] = a[i - 1] * l[i - 1];

    for (int i = (n - 2); i >= 0; i--)
        r[i] = a[i + 1] * r[i + 1];

    for (int i = 0; i < n; i++)
        prod[i] = l[i] * r[i];

    cout << "\nProduct Array: ";
    for (int i = 0; i < n; i++)
    {
        cout << prod[i] << " ";
    }
    return 0;
}

int main()
{
    int a[] = {1, 2, 3, 4}, n;
    n = sizeof(a) / sizeof(a[0]);
    cout << "Given Array: ";
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    product(a, n);
    return 0;
}