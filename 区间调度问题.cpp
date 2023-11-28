#include <bits/stdc++.h>
using namespace std;
struct hd
{
    int begin, end;
} harr[1005];
bool cmp(hd a, hd b) { return a.end < b.end; }
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n, last = 0, ans = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> harr[i].begin >> harr[i].end;
    sort(harr, harr + n, cmp);
    for (int i = 0; i < n; i++)
    {
        if (last <= harr[i].begin)
            ans++, last = harr[i].end;
    }
    cout << ans << endl;
    return 0;
}
