#include <bits/stdc++.h>
using namespace std;
int arr[1005][1005];
int main()
{
    int n, m;
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            cin >> arr[i][j];
        }
    }
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            if (arr[i][j] != 0)
            {
                cout << i << " " << j << " " << arr[i][j] << endl;
            }
        }
    }
    return 0;
}
