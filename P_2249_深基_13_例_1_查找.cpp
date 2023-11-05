#include <bits/stdc++.h>
#define ll long long int
using namespace std;
const int N = (1e6) + 1;
ll arr[N];
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n, m;
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
        cin >> arr[i];
    while (m--)
    {
        ll q;
        cin >> q;
        /*int l = 1, r = n, mid, flag = 0;
        while (l < r)
        {
            mid = (r + l) / 2;
            if (arr[mid] >= q)
                r = mid;
            else
                l = mid + 1;
        }
        if (arr[l] == q)
            cout << l << ' ';
        else
            cout << -1 << ' ';*/
        int ans = lower_bound(arr + 1, arr + 1 + n, q) - arr;
        if (q == arr[ans])
            cout << ans << ' ';
        else
            cout << -1 << ' ';
    }
    return 0;
}
