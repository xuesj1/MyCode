#include <bits/stdc++.h>
using namespace std;
int n, arr[10005], sum = 0, mmax = INT_MIN, mmin = INT_MAX;
bool cmp(int a, int b)
{
    if (a > b)
        return true;
    else
        return false;
}
int main()
{
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        sum += arr[i];
        mmax = max(mmax, arr[i]), mmin = min(mmin, arr[i]);
    }
    sort(arr, arr + n, cmp);
    int len = unique(arr, arr + n) - arr;
    cout << sum << endl
         << mmax << endl
         << mmin << endl;
    for (int i = 0; i < len; i++)
        cout << arr[i] << ' ';
    return 0;
}
