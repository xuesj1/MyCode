// 洛谷p8109
#include <bits/stdc++.h>
using namespace std;
int a[100001], b[100001];
int main()
{
    int n, cut = 0;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    for (int i = 1; i <= n; i++)
    {
        cin >> b[i];
    }
    sort(a, a + n);
    sort(b, b + n);
    for (int i = 1; i <= n; i++)
    {
        if (a[i] <= b[i])
            cut += a[i];
        else
            cut += b[i];
    }
    cout << cut << endl;
    return 0;
}
