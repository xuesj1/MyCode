#include <bits/stdc++.h>
#define ll long long int
using namespace std;
bool sushu(int n)
{
    n /= 1000000;
    bool flag = 1;
    for (int i = 2; i <= sqrt(n); i++)
        if (n % i == 0)
            flag = 0;
    return flag;
}
bool pingfang(int n)
{
    n %= 1000;
    int sum = (int)sqrt(n);
    if (sum * sum == n)
        return true;
    else
        return false;
}
bool han13(int n)
{
    while (n != 0)
    {
        if (n % 100 == 13)
            return false;
        n /= 10;
    }
    return true;
}
int main()
{
    ll n, m, ans = 0;
    cin >> n >> m;
    for (ll i = n; i <= m; i++)
    {
        if (sushu(i) && pingfang(i) && han13(i))
            ans++;
    }
    cout << ans << endl;
    return 0;
}
