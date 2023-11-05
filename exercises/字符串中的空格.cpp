#include <bits/stdc++.h>
using namespace std;
string s[10005], ss[10005];
int main()
{
    int n, ans = 0;
    cin >> n;
    for (int i = 0; i <= n; i++)
    {
        getline(cin, s[i]);
    }
    for (int i = 0; i <= n; i++)
    {
        int k = 0;
        for (int j = 0; j < s[i].size(); j++)
        {
            if (s[i][j] != ' ')
            {
                ss[i][k] = s[i][j];
                k++;
            }
            else
                ans++;
        }
    }
    cout << ans << endl;
    for (int i = 0; i < n; i++)
    {
        cout << ss[i] << endl;
    }
    return 0;
}
