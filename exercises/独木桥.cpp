#include <bits/stdc++.h>
using namespace std;
int l, n, arr[5005], m_max = 0, m_min = 0;
int main()
{
    cin >> l >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        m_min = max(min(arr[i], l - arr[i] + 1), m_min);
        m_max = max(max(arr[i], l - arr[i] + 1), m_max);
    }
    cout << m_min << " " << m_max << endl;
    return 0;
}
