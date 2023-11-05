#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
const int maxn = 4e5 + 10;
ll f[maxn], v[maxn], b[maxn];
int n, wz[maxn];
ll d, mi[maxn], a[maxn];
ll dfs(int i)
{
    if (i == 1)
        return 0;
    if (f[i] != -1)
        return f[i];
    else
    {
        if (wz[i] == i)
            return dfs(wz[i - 1]) + a[wz[i - 1]] * (b[i] - b[wz[i - 1]]);
        else
            return dfs(wz[i]) + a[wz[i]] * (b[i] - b[wz[i]]);
    }
}
int main()
{
    // freopen("road.in", "r", stdin);
    // freopen("road.out", "w", stdout);
    memset(f, -1, sizeof(f));
    scanf("%d%lld", &n, &d);
    mi[0] = 1145141919810LL; //
    for (int i = 1; i < n; i++)
    {
        scanf("%lld", &v[i]), v[i] += v[i - 1];
        b[i + 1] = (v[i] + d - 1) / d;
        // b[i]，到站点 i 至少要加多少升的油
    }
    for (int i = 1; i <= n; i++)
    {
        scanf("%lld", &a[i]);
        mi[i] = min(mi[i - 1], a[i]);
        if (mi[i] == mi[i - 1])
            wz[i] = wz[i - 1];
        else
            wz[i] = i;
    }
    printf("%lld\n", dfs(n));
    return 0;
}