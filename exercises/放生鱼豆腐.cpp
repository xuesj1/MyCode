#include <bits/stdc++.h>
using namespace std;
int k, a, b, c, ans, arr[1005];
int main()
{
    cin >> k >> a >> b >> c;
    for (int i = 0; i < k; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < k; i++)
    {
        if (arr[i] <= 10)
            ans += arr[i] * a;
        if (arr[i] > 10 && arr[i] <= 100)
            ans += 10 * a + (arr[i] - 10) * b;
        if (arr[i] > 100)
            ans += 10 * a + 90 * b + (arr[i] - 100) * c;
    }
    cout << ans << endl;
    return 0;
}
