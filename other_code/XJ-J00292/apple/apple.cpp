#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    // chen_zhe Orz
    // freopen("apple.in","r",stdin);
    // freopen("apple.out","w",stdout);
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll n, ans = 0, nans = 0;
    bool a = 0;
    cin >> n;
    while (n > 3)
    {
        ans++;
        if (n % 3 == 1 && a == 0)
        {
            nans = ans, a = 1;
        }
        if (n % 3)
            n -= (n / 3 + 1);
        else
            n -= (n / 3);
    }
    ans += n;
    if (!nans)
        nans = ans;
    cout << ans << ' ' << nans << endl;
    return 0;
}