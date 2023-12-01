#include <bits/stdc++.h>
using namespace std;
const int N = 3 * 1e4 + 1;
int arr[N], book[N];
int main()
{
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int n, w, ans = 0, temp;
    cin >> w >> n;
    temp = n;
    for (int i = 0; i < n; i++)
        cin >>
            arr[i],
            book[i] = 1;
    sort(arr, arr + n);
    int l = 0, r = n - 1;
    while (l < r)
    {
        if (arr[l] + arr[r] <= w)
            l++, r--, ans++, temp -= 2;
        else
            r--;
    }
    cout << ans + temp << endl;
    return 0;
}
