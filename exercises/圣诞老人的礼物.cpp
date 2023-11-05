#include <bits/stdc++.h>
using namespace std;
struct Candy
{
    double v, w;
} can[105];
bool cmp(Candy a, Candy b)
{
    if (a.v / a.w > b.v / b.w)
        return true;
    else
        return false;
}
int main()
{
    int n, w;
    double ans = 0, noww = 0;
    cin >> n >> w;
    for (int i = 0; i < n; i++)
    {
        cin >> can[i].v >> can[i].w;
    }
    sort(can, can + n, cmp);
    for (int i = 0; i < n; i++)
    {
        if (noww + can[i].w > w)
        {
            ans += (can[i].v / can[i].w) * (w - noww);
            break;
        }
        else
        {
            noww += can[i].w;
            ans += can[i].v;
        }
    }
    printf("%.1lf", ans);
    return 0;
}
