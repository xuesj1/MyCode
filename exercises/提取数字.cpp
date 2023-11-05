// aa10bb20
// 00a0sdc456123c04d002546
#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    string s;
    bool flag = 1;
    ll n, ans = 0, temp = 0, xb = 0;
    cin >> n >> s;
    for (int i = s.size() - 1; i >= 0; i--)
    {
        if (s[i] >= '0' && s[i] <= '9')
        {
            temp++;
            ans += (s[i] - 48) * pow(10, temp - 1);
            if (flag != 0 && (s[i] > '0' || (s[i - 1] > '0' && s[i - 1] <= '9')))
                xb += 5, flag = 0;
        }
        else
        {
            temp = 0;
            flag = 1;
        }
    }
    cout << ans + xb << endl;
    return 0;
}
