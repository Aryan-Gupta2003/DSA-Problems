// Maximum Product Subarray

#include <bits/stdc++.h>
using namespace std;
int max_sum(int a[], int n)
{
    int c1 = a[0], c2 = a[0], largest_product = a[0];
    for (int i = 1; i < n; i++)
    {
        int temp = max(max(a[i], a[i] * c1), a[i] * c2);
        c1 = min(min(a[i], a[i] * c1), a[i] * c2);
        c2 = temp;
        largest_product = max(largest_product, c2);
    }
    return largest_product;
}

int main()
{
    int a[] = {-2, -3, 4, -1, -2, 1, 5, -3}, n;
    n = sizeof(a) / sizeof(a[0]);
    int res = max_sum(a, n);
    cout << "Given Array: ";
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << "\nLargest Sum: " << res << endl;
    return 0;
}