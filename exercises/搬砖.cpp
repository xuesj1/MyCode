#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int n, xc = 0, ans = 0, a, k, b;
    cin >> n >> a >> k >> b;
    if (n % 2 != 0)
    {
        cout << -1 << endl;
        return 0;
    }
    else
    {
        int nn = n / 2;
        if (a * k > b)
        {
            xc = nn / k;
            ans = xc * b + (nn - xc * k) * a;
        }
        else
            ans = nn * a;
    }
    cout << ans * 2 << endl;
    return 0;
}
