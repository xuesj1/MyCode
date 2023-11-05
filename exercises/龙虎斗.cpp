#include <bits/stdc++.h>
#define lli long long int
using namespace std;

int main()
{
    lli n;
    lli p1, s1, s2, arr[100005], m, p2 = 0;
    lli lon = 0, hu = 0;
    cin >> n;
    for (lli i = 1; i <= n; i++)
        cin >> arr[i];
    cin >> m >> p1 >> s1 >> s2;
    arr[p1] += s1;
    for (lli i = 1; i <= n; i++)
    {
        if (i < m)
            lon += arr[i] * (m - i);
        else if (i > m)
            hu += arr[i] * (i - m);
    }
    lli cha = abs(lon - hu), m_min = cha;
    if (lon == hu)
    {
        cout << m << endl;
        return 0;
    }
    else if (lon > hu)
    {
        for (lli i = m + 1; i <= n; i++)
        {
            lli t = hu;
            t += s2 * (i - m);
            cha = abs(t - lon);
            if (m_min > cha)
            {
                m_min = cha;
                p2 = i;
            }
        }
    }
    else
    {
        for (lli i = 1; i < m; i++)
        {
            lli t = lon;
            t += s2 * (m - i);
            cha = abs(t - hu);
            if (m_min > cha)
            {
                m_min = cha;
                p2 = i;
            }
        }
    }
    p2 != 0 ? cout << p2 << endl : cout << m << endl;
    return 0;
}
