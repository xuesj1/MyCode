#include <bits/stdc++.h>
#define ll long long
using namespace std;
const int N = 2e5 + 5;
int arr[N];
int main()
{
    ll n, b, s = 0, ans = 0;
    cin >> n >> b;
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    sort(arr, arr + n, greater<int>());
    for (int i = 0; i < n; i++)
    {
        s += arr[i], ans++;
        if (s >= b)
            break;
    }
    cout << ans << endl;
    return 0;
}
