#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n = -1, arr[101];
    while (1)
    {
        int ans = 0;
        cin >> n;
        if (n == 0)
            return 0;
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        sort(arr, arr + n);
        int t = (n / 2) + 1;
        for (int i = 0; i < t; i++)
        {
            ans += (arr[i] / 2) + 1;
        }
        cout << ans << endl;
    }
    return 0;
}
