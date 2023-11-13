#include <bits/stdc++.h>
using namespace std;
int arr[1005];
int main()
{
    int n, m, ans = 0, ans2 = 0;
    cin >> n >> m;
    for (int i = 0; i < m; i++)
        cin >> arr[i];
    sort(arr, arr + m, greater<int>());
    for (int i = 0; i < m; i++)
    {
        if (arr[i] * (i + 1) >= ans && i + 1 <= n)
            ans = arr[i] * (i + 1), ans2 = arr[i];
    }
    cout << ans2 << ' ' << ans << endl;
    return 0;
}
