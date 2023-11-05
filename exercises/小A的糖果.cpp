#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    long long arr[100005], x, ans = 0;
    cin >> n >> x;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (arr[i + 1] + arr[i] > x)
        {
            ans += (arr[i + 1] + arr[i]) - x;
            arr[i + 1] -= (arr[i + 1] + arr[i]) - x;
        }
    }
    cout << ans << endl;
    return 0;
}
