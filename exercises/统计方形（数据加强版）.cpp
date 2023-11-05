#include <bits/stdc++.h>
using namespace std;
long long int n, m, ju, zh;
int main()
{
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            zh += min(i, j);
            ju += i * j;
        }
    }
    cout << zh << " " << ju - zh << endl;
    return 0;
}
