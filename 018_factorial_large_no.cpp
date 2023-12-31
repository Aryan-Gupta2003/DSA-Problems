// To find the Factorial of a large number

#include <bits/stdc++.h>
using namespace std;
#define MAX 500
int fact(int n)
{
    int arr[MAX], s = 0, c = 0, x = n, temp, i, j;
    arr[0] = 1;
    s = 1;
    for (int f = 2; f < (x + 1); f++)
    {
        for (j = 0; j < s; j++)
        {
            temp = (arr[j] * f) + c;
            arr[j] = temp % 10;
            c = int(temp / 10);
        }
        while (c > 0)
        {
            arr[s] = c;
            c = int(c / 10);
            s++;
        }
        c = 0;
    }
    for (int i = s - 1; i >= 0; i--)
    {
        cout << arr[i] << "";
    }
    return 1;
}

int main()
{
    int n;
    cout << "Enter large no. to calculate factorial: ";
    cin >> n;
    fact(n);
    return 0;
}