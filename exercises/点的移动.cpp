// 洛谷p1632
/*#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n = 0, x[55], y[55];
    int x_min = INT_MAX, y_min = INT_MAX;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> x[i];
        cin >> y[i];
    }
    for (int a = 0; a < n; a++)
    {
        for (int i = 0; i < a + 1; i++)
        {
            x_min = min(x_min, x[i]);
            y_min = min(y_min, y[i]);
        }
        int m_min1 = INT_MAX, m_min2 = INT_MAX;
        for (int i = x_min, k = 0; k < a + 1; i++, k++)
        {
            int t = 0;
            for (int j = 0; j < a + 1; j++)
            {

                t += abs(x[j] - i);
            }
            m_min1 = min(m_min1, t);
        }
        for (int i = y_min, k = 0; k < a + 1; i++, k++)
        {
            int t = 0;
            for (int j = 0; j < a + 1; j++)
            {

                t += abs(y[j] - i);
            }
            m_min2 = min(m_min2, t);
        }
        cout << m_min1 + m_min2 << endl;
    }
    return 0;
}*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x[55], y[55], ans[55], m_min[55], t = 0;
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> x[i] >> y[i];
        m_min[i] = INT_MAX;
    }
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            for (int k = 1; k <= n; k++)
                ans[k] = abs(x[k] - x[i]) + abs(y[k] - y[j]);
            sort(ans + 1, ans + 1 + n);
            for (int i = 1; i <= n; i++)
            {
                t += ans[i];
                m_min[i] = min(m_min[i], t);
            }
            t = 0;
        }
    }
    for (int i = 1; i <= n; i++)
    {
        cout << m_min[i] << endl;
    }
    return 0;
}