#include <bits/stdc++.h>
using namespace std;
int arr[10001][10001];
int dp[100001];
int main()
{
    int t, n, m;
    cin >> t >> n >> m;
    for (int i = 1; i <= t; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cin >> arr[i][j];
        }
    }
    for (int i = 1; i < t; i++)
    {
        memset(dp, 0, sizeof dp);
        for (int j = 1; j <= n; j++)
        {
            for (int k = arr[i][j]; k <= m; k++)
            {
                dp[k] = max(dp[k], dp[k - arr[i][j]] + (arr[i + 1][j] - arr[i][j]));
            }
        }
        m += dp[m];
    }
    cout << m << endl;
    return 0;
}
