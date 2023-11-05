#include <bits/stdc++.h>
using namespace std;
struct Apple
{
    int h, l;
} ap[5005];
bool cmp(Apple a, Apple b)
{
    if (a.l < b.l)
        return true;
    else
        return false;
}
int main()
{
    int n, s, a, b, ans = 0;
    cin >> n >> s >> a >> b;
    for (int i = 0; i < n; i++)
    {
        cin >> ap[i].h >> ap[i].l;
    }
    sort(ap, ap + n, cmp);
    for (int i = 0; i < n; i++)
    {
        if (ap[i].l <= s && ap[i].h <= a + b)
        {
            ans++;
            s -= ap[i].l;
        }
    }
    cout << ans;
    return 0;
}
