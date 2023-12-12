#include <bits/stdc++.h>
using namespace std;
int arr[7];
int sy_2[4] = {0, 5, 3, 1};
int main()
{
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    while (1)
    {
        int sum = 0, ans = 0;
        for (int i = 1; i <= 6; i++)
        {
            cin >> arr[i];
            sum += arr[i];
        }
        if (sum == 0)
            break;
        ans += arr[6] + arr[5] + arr[4] + ceil(arr[3] * 1.0 / 4);
        int wz_2 = arr[4] * 5 + sy_2[arr[3] % 4];
        if (arr[2] > wz_2)
            ans += ceil((arr[2] - wz_2) * 1.0 / 9);
        int wz_1 = ans * 36 - arr[6] * 36 - arr[5] * 25 - arr[4] * 16 - arr[3] * 9 - arr[2] * 4;
        if (arr[1] > wz_1)
            ans += ceil((arr[1] - wz_1) * 1.0 / 36);
        cout << ans << endl;
    }
    return 0;
}
