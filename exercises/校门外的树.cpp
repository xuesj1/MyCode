#include <bits/stdc++.h>
using namespace std;
struct zb
{
    int u, v;
} str[105];
int arr[10005];
int main()
{
    int l, m, cut = 0;
    cin >> l >> m;
    for (int i = 0; i < m; i++)
    {
        cin >> str[i].u >> str[i].v;
    }
    for (int i = 0; i < m; i++)
    {
        for (int j = str[i].u; j <= str[i].v; j++)
        {
            arr[j] = 1;
        }
    }
    for (int i = 0; i <= l; i++)
    {
        if (arr[i] == 0)
            cut++;
    }
    cout << cut << endl;
    return 0;
}
