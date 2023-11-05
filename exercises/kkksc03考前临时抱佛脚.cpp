#include <bits/stdc++.h>
using namespace std;
int s, a[25], now, m_time = INT_MIN, s_t, ans, mk;
void dfs(int k)
{
    if (k > mk)
    {
        m_time = max(m_time, now);
        return;
    }
    if (now + a[k] <= s_t / 2)
    {
        now += a[k];
        dfs(k + 1);
        now -= a[k];
    }
    dfs(k + 1);
}
int main()
{
    int s[5];
    cin >> s[1] >> s[2] >> s[3] >> s[4];
    for (int i = 1; i <= 4; i++)
    {
        mk = s[i];
        m_time = INT_MIN;
        now = 0, s_t = 0;
        for (int j = 1; j <= s[i]; j++)
        {
            cin >> a[j];
            s_t += a[j];
        }
        dfs(1);
        ans += (s_t - m_time);
    }
    cout << ans << endl;
    return 0;
}
