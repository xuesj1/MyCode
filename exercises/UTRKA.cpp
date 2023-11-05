// 洛谷p6402
#include <bits/stdc++.h>
using namespace std;
map<string, int> m;
string ss[100001];
int main()
{
    int n = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> ss[i];
        m[ss[i]]++;
    }
    for (int i = 0; i < n - 1; i++)
    {
        string s;
        cin >> s;
        m[s]--;
    }
    for (int i = 0; i < n; i++)
    {
        if (m[ss[i]] != 0)
        {
            cout << ss[i] << endl;
            break;
        }
    }
    return 0;
}
