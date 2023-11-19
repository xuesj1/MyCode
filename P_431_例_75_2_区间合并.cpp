/*
1 5
5 6
6 9
8 10
10 10
*/
#include <bits/stdc++.h>
using namespace std;
struct qj
{
    int l, r;
} qarr[50005];
inline bool cmp(qj a, qj b) { return a.l < b.l; }
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> qarr[i].l >> qarr[i].r;
    sort(qarr, qarr + n, cmp);
    int l, r;
    l = qarr[0].l, r = qarr[0].r;
    for (int i = 1; i < n; i++)
    {
        if (r >= qarr[i].l)
            r = qarr[i].r;
        else
        {
            cout << "no";
            return 0;
        }
    }
    cout << l << ' ' << r << endl;
    return 0;
}
