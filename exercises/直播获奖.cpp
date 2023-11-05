#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, w, x, arr[605], now = INT_MIN, p = 0, ww;
    memset(arr, 0, sizeof arr);
    cin >> n >> w;
    for (int i = 1; i <= n; i++)
    {
        p = 0;
        cin >> x;
        arr[x]++;
        now = max(now, x);
        for (int j = now; j >= 0; j--)
        {
            p += arr[j];
            if (p >= max(1, i * w / 100))
            {
                cout << j << " ";
                break;
            }
        }
    }
    return 0;
}
