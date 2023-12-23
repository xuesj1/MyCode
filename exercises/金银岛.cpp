#include <bits/stdc++.h>
using namespace std;
struct js
{
    double n, v;
} jarr[105];
bool cmp(js a, js b)
{
    if (a.v * b.n > a.n * b.v) // a.v / a.n > b.v / b.n
        return true;
    else
        return false;
}
int main()
{
    int k;
    cin >> k;
    while (k--)
    {
        int w, s, temp = 0;
        double ans = 0;
        cin >> w >> s;
        for (int i = 0; i < s; i++)
            cin >> jarr[i].n >> jarr[i].v;
        sort(jarr, jarr + s, cmp);
        for (int i = 0; i < s; i++)
        {
            if (temp + jarr[i].n > w)
            {
                ans += (jarr[i].v / jarr[i].n) * (w - temp);
                break;
            }
            else
            {
                temp += jarr[i].n;
                ans += jarr[i].v;
            }
        }
        printf("%.2lf\n", ans);
    }
    return 0;
}
