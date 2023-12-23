#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 1;
long long n, arr[N], ans = 0, nowlc = 0;
int main()
{
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    sort(arr, arr + n);
    for (int i = 0; i < n; i++)
    {
        ans += (arr[i] - nowlc) * 6 + 1;
        nowlc = arr[i];
    }
    int len = unique(arr, arr + n) - arr;
    cout << ans + nowlc * 4 + len * 5 << endl;
    return 0;
}
