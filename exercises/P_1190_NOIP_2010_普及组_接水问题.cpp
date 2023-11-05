#include <bits/stdc++.h>
using namespace std;
int arr[10005], marr[105];
int func(int arr[], int m)
{
    int mmin = INT_MAX, ans = 0;
    for (int i = 1; i <= m; i++)
    {
        if (mmin > arr[i])
            mmin = arr[i], ans = i;
    }
    return ans;
}
int main()
{
    int n, m, xb, mmax = INT_MIN;
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
        cin >> arr[i];
    for (int i = 1; i <= n; i++)
    {

        // cout << xb << endl;
        xb = func(marr, m);
        marr[xb] += arr[i];
        // cout << arr[xb] << endl;
    }
    for (int i = 1; i <= m; i++)
    {
        if (mmax < marr[i])
            mmax = marr[i];
    }
    cout << mmax << endl;
    return 0;
}
