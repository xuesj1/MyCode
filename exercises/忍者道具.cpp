#include <bits/stdc++.h>
using namespace std;
int n, w, ans = 20;
int a[20], bag[20];

void dfs(int x, int sum)
{
    if (sum >= ans)
        return;
    if (x > n)
    {
        ans = min(ans, sum);
        return;
    }
    for (int i = 1; i <= sum; i++)
    {
        if (bag[i] >= a[x])
        {
            bag[i] -= a[x];
            dfs(x + 1, sum);
            bag[i] += a[x];
        }
    }
    bag[sum + 1] -= a[x];
    dfs(x + 1, sum + 1);
    bag[sum + 1] += a[x];
}

int main()
{
    cin >> n >> w;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        bag[i] = w;
    }
    dfs(1, 1);
    cout << ans << endl;
    return 0;
}