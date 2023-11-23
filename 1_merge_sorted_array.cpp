// Merge the 2 Sorted Array into another array

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a[10], b[10], c[10], n, m;
    cout << "Enter no. of elements in array A: ";
    cin >> n;
    cout << "Enter no. of elements in array B: ";
    cin >> m;
    cout << "Enter elements in array A: " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cout << "Enter elements in array B: " << endl;
    for (int i = 0; i < m; i++)
    {
        cin >> b[i];
    }
    int i = 0, j = 0, k = 0;
    while (i < n && j < m)
    {
        if (a[i] < b[j])
        {
            c[k] = a[i];
            i++;
        }
        else
        {
            c[k] = b[j];
            j++;
        }
        k++;
    }
    while (i < n)
    {
        c[k] = a[i];
        i++;
        k++;
    }
    while (j < m)
    {
        c[k] = b[j];
        j++;
        k++;
    }
    cout << "Elements in array C: ";
    for (int e = 0; e < (n + m); e++)
    {
        cout << c[e] << " ";
    }
    return 0;
}
