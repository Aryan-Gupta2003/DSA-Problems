// Check if pair with given Sum exists in Array

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a[10], n, x, c, s, e;
    cout << "Enter no. of elements in array A: ";
    cin >> n;
    cout << "Enter elements in array A: " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cout << "Enter element to be checked: ";
    cin >> x;
    for (int i = 0; i < n; i++)
    {
        for (int j = (i + 1); j < n; j++)
        {
            s = a[i];
            if (x == (s + a[j]))
            {
                e = a[j];
                c = 1;
                break;
            }
        }
    }
    if (c == 1)
    {
        cout << "YES, Element is equal to sum of 2 elements in array " << s << " and " << e << endl;
    }
    else
    {
        cout << "NO, Element is not equal to sum of 2 elements in array" << endl;
    }

    return 0;
}