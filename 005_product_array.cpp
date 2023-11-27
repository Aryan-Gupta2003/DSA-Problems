// Product of Array except itself

#include <bits/stdc++.h>
using namespace std;
int product(int arr[], int n)
{
    if (n == 1)
    {
        cout << 0;
        return 0;
    }
    int *prod = new int[sizeof(int) * n];
    // memset(prod, 1, n);
    for (int i = 0; i < n; i++)
    {
        prod[i] = 1;
    }
    for (int i = 0; i < n; i++)
    {
        if (n == 0)
        {
            cout << 0;
            return 0;
        }
        int p = arr[i];
        for (int j = 0; j < n; j++)
        {
            if (j == i)
                continue;
            prod[i] = prod[i] * arr[j];
        }
    }
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