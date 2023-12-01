#include <bits/stdc++.h>
#define ll long long
using namespace std;
int arr[100005];
int main()
{
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int t = 0;
    cin >> t;
    while (t--)
    {
        ll n, ans = 0;
        cin >> n;
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        sort(arr, arr + n);
        while (n > 3)
        {
            ans += min(arr[n - 1] + arr[n - 2] + 2 * arr[0], 2 * arr[1] + arr[0] + arr[n - 1]);
            n -= 2;
        }
        if (n == 1)
            ans += arr[0];
        else if (n == 2)
            ans += arr[1];
        else if (n == 3)
            ans += arr[0] + arr[1] + arr[2];
        cout << ans << endl;
    }
    return 0;
}
