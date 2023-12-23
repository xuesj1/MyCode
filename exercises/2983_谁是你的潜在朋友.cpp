#include <bits/stdc++.h>
using namespace std;
int arr[205];
int main()
{
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    for (int i = 0; i < n; i++)
    {
        int ans = 0;
        for (int j = 0; j < n; j++)
        {
            if (i != j && arr[i] == arr[j] && arr[i] <= m)
            {
                ans++;
            }
        }
        if (ans == 0)
            cout << "BeiJu" << endl;
        else
            cout << ans << endl;
    }
    return 0;
}
