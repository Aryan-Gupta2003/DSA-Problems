// Largest Sum Contiguous Subarray (Kadane’s Algorithm)

#include <bits/stdc++.h>
using namespace std;
int max_sum(int a[], int n)
{
    int largest_sum = 0, c = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        largest_sum += a[i];
        if (c < largest_sum)
            c = largest_sum;
        if (largest_sum < 0)
            largest_sum = 0;
    }
    return c;
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