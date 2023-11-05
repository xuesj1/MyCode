#include <bits/stdc++.h>
using namespace std;
struct Mns
{
    int beg, end;
};
Mns yyy[1000005];
bool cmp(Mns a, Mns b)
{
    if (a.end <= b.end)
        return true;
    else
        return false;
}
int n, ans, f = 0;
int main()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> yyy[i].beg >> yyy[i].end;
    }
    sort(yyy + 1, yyy + n + 1, cmp);
    for (int i = 1; i <= n; i++)
    {
        if (f <= yyy[i].beg)
        {
            ans++;
            f = yyy[i].end;
        }
    }
    cout << ans << endl;
    return 0;
}
