#include <bits/stdc++.h>
using namespace std;
string s;
int main()
{
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int n;
    cin >> s >> n;
    int t = n;
    while (t--)
    {
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] > s[i + 1])
            {
                for (int j = i; j < s.size(); j++)
                {
                    s[j] = s[j + 1];
                }
                break;
            }
        }
    }
    int wz = 0;
    while (1)
    {
        if (s[wz] == '0')
            wz++;
        else
            break;
    }
    for (int i = wz; i < s.length() - n; i++)
        cout << s[i] - '0';
    if (wz == s.length() - n)
        cout << 0 << endl;
    return 0;
}
