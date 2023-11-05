#include <bits/stdc++.h>
using namespace std;
string s[100005];
int main()
{
    int n = 0, ans = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> s[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (s[i][0] == 'A' || s[i][0] == 'B' || s[i][0] == 'C' ||
            s[i][0] == 'D' || s[i][0] == 'E' || s[i][0] == 'F' ||
            s[i][0] == 'G' || s[i][0] == 'R' || s[i][0] == 'S' || s[i][0] == 'T')
            continue;
        else
            ans++;
    }
    cout << ans << endl;
    return 0;
}
