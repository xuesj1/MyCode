#include <bits/stdc++.h>
using namespace std;
int arr[105], flag[10005];
int main()
{
    int n, ans = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n - 1; i++)
        for (int j = i + 1; j < n; j++)
            for (int k = 0; k < n; k++)
                if (arr[i] + arr[j] == arr[k] && flag[arr[k]] == 0)
                    ans++, flag[arr[k]] = 1;
    cout << ans << endl;
    return 0;
}
