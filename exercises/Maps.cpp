#include <bits/stdc++.h>
using namespace std;
int arr[100005];
int main()
{
    int t, n, p;
    cin >> t;
    while (t--)
    {
        memset(arr, 0, sizeof arr);
        cin >> n >> p;
        if (2 * p + 1 > n)
        {
            cout << -1 << endl;
            continue;
        }
        else
        {
            for (int i = 0; i < 2 * p + 1; i++)
            {
                if (i % 2 != 0)
                    arr[i] = 0;
                else
                    arr[i] = 1;
            }
        }
        for (int i = n - 1; i >= 0; i--)
            cout << arr[i];
        cout << endl;
    }
    return 0;
}
