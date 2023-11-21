#include <bits/stdc++.h>
using namespace std;
int maxprofit(int arr[], int n)
{
    int cp = arr[0], p = 0;
    for (int i = 1; i < n; i++)
    {
        if (arr[i] < cp)
        {
            cp = arr[i];
        }
        else if ((arr[i] - cp) > p)
        {
            p = (arr[i] - cp);
        }
    }
    return p;
}
int main()
{
    int a[10], n;
    cout << "Enter no. of elements in array A: ";
    cin >> n;
    cout << "Enter elements in array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int profit = maxprofit(a, n);
    cout << profit << endl;
    return 0;
}