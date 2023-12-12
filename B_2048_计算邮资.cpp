#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int n, ans = 8;
    char ch;
    cin >> n >> ch;
    if (ch == 'y')
    {
        ans += 5;
        if (n > 1000)
            ans += ceil((n - 1000) * 1.0 / 500) * 4;
    }
    else
    {
        if (n > 1000)
            ans += ceil((n - 1000) * 1.0 / 500) * 4;
    }
    cout << ans << endl;
    return 0;
}
