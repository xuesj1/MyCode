#include <bits/stdc++.h>
using namespace std;
struct zb
{
    int x, y, zdl, bh;
} zarr[105];
bool cmp(zb a, zb b)
{
    if (a.zdl >= b.zdl)
        return true;
    else
        return false;
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> zarr[i].x >> zarr[i].y;
        zarr[i].bh = i + 1;
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (zarr[i].x > zarr[j].x && zarr[i].y > zarr[j].y)
            {
                zarr[i].zdl++;
            }
        }
    }
    for (int i = 0; i < n; i++)
        cout << zarr[i].zdl << endl;
    sort(zarr, zarr + n, cmp);
    cout << zarr[0].bh << endl;
    return 0;
}
