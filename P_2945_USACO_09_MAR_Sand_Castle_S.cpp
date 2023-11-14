#include <bits/stdc++.h>
using namespace std;
const int N = 2e4 + 5005;
int arr[N], brr[N];
int main()
{
    int n, x, y;
    cin >> n >> x >> y;
    for (int i = 0; i < n; i++)
        cin >> arr[i] >> brr[i];
    sort(arr, arr + n, greater<int>()), sort(brr, brr + n, greater<int>());
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > brr[i])
            ans += (arr[i] - brr[i]) * y;
        else if (arr[i] < brr[i])
            ans += (brr[i] - arr[i]) * x;
    }
    cout << ans << endl;
    return 0;
}
