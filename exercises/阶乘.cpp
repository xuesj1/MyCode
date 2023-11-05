#include <bits/stdc++.h>
using namespace std;
long long arr[40000], len = 1, n;
int main()
{
    cin >> n;
    arr[1] = 1;
    for (long long i = 1; i <= n; i++)
    {
        long long jin = 0;
        for (long long j = 1; j <= len; j++)
        {
            arr[j] = arr[j] * i + jin;
            jin = arr[j] / 10;
            arr[j] = arr[j] % 10;
            if (j == len && jin != 0)
                len++;
        }
    }
    for (long long i = len; i >= 1; i--)
    {
        cout << arr[i];
    }
    return 0;
}
